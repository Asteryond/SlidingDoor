#include "DAQ_GUI_QT.h"

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"


DAQ_GUI_QT::DAQ_GUI_QT(QWidget* parent)
    : QMainWindow(parent),
    deviceCount(0),
    isDeviceConnected(false),
    deviceIndex(0),
    chanSel(0),
    //pointsPerChan(1000),
    m_series_posSensor(0),
    m_axisX(new QValueAxis()),
    m_axisY(new QValueAxis()),
    doorSwitchStatus(false)
{
    ui.setupUi(this);

    for (int i = 0; i < 16; i++)
    {
        DO[i] = 0;
        DI[i] = 0;
        chanSelAi[i] = 0;
    }

    timer_DI = new QTimer(this);
    timer_DI->setInterval(100);
    connect(timer_DI, &QTimer::timeout, this, &DAQ_GUI_QT::indicatorControll);
    


    timer_current = new QTimer(this);
    timer_current->setInterval(1000);
    connect(timer_current, &QTimer::timeout, this, &DAQ_GUI_QT::getCurrentTime);
    timer_current->start();

    taskGetAIPoints = new GetAIPoints();
    connect(taskGetAIPoints, &GetAIPoints::done, this, &DAQ_GUI_QT::drawPoints);

    //connect(ui.btn_setting, SIGNAL(clicked()), this, SLOT(onBtnSettingClick()));
    connect(ui.btn_refresh, SIGNAL(clicked()), this, SLOT(onBtnRefreshClick()));
    connect(ui.checkBox_all, SIGNAL(stateChanged(int)), this, SLOT(onCheckboxAllStateChanged()));
    connect(ui.btn_connect_daq, SIGNAL(clicked()), this, SLOT(onBtnConnectDAQClick()));
    connect(ui.btn_start, SIGNAL(clicked()), this, SLOT(onBtnStartClicked()));
    connect(ui.btn_stop, SIGNAL(clicked()), this, SLOT(onBtnStopClicked()));
    connect(ui.btn_dio_start, &QPushButton::clicked, this, &DAQ_GUI_QT::onBtnDIOStartClicked);
    connect(ui.btn_dio_stop, &QPushButton::clicked, this, &DAQ_GUI_QT::onBtnDIOStopClicked);
    
    m_series_posSensor = new QLineSeries();
    m_series_driveMotor = new QLineSeries();
    m_series_blokingBrake = new QLineSeries();
    m_series_elecmagBrake = new QLineSeries();

    m_series_posSensor->setUseOpenGL();
    m_series_driveMotor->setUseOpenGL();
    m_series_blokingBrake->setUseOpenGL();
    m_series_elecmagBrake->setUseOpenGL();

    QChart* chart = new QChart();

    m_axisX->setRange(0, 15);
    m_axisY->setRange(-6, 6);
    m_axisY->setTickCount(12);
    m_axisY->setMinorTickCount(4);

    chart->addAxis(m_axisX, Qt::AlignBottom);
    chart->addAxis(m_axisY, Qt::AlignLeft);

    chart->addSeries(m_series_blokingBrake);
    chart->addSeries(m_series_posSensor);
    chart->addSeries(m_series_driveMotor);
    chart->addSeries(m_series_elecmagBrake);

    chart->legend()->setVisible(true);

    m_series_blokingBrake->attachAxis(m_axisX);
    m_series_blokingBrake->attachAxis(m_axisY);

    m_series_posSensor->attachAxis(m_axisX);
    m_series_posSensor->attachAxis(m_axisY);
    m_series_driveMotor->attachAxis(m_axisX);
    m_series_driveMotor->attachAxis(m_axisY);
    m_series_elecmagBrake->attachAxis(m_axisX);
    m_series_elecmagBrake->attachAxis(m_axisY);

    m_series_posSensor->setName("位置传感器通道A/B");
    m_series_driveMotor->setName("驱动电机信号");
    m_series_blokingBrake->setName("主轴阻塞制动器");
    m_series_elecmagBrake->setName("电磁制动器（解锁）");

    m_series_posSensor->setColor(QColor(255, 0, 24));
    m_series_driveMotor->setColor(QColor(134, 0, 125));
    m_series_blokingBrake->setColor(QColor(0, 128, 24));
    m_series_elecmagBrake->setColor(QColor(0, 0, 249));
    
    ui.chartView_0->setChart(chart);

}

void DAQ_GUI_QT::onBtnSettingClick()
{
    
}

void DAQ_GUI_QT::onBtnRefreshClick()
{
    deviceCount = FindUSBDAQ();
    ui.label_daq_count->setText(QString::number(deviceCount));

    for (int i = 0; i < deviceCount; i++)
    {
        ui.comboBox_devices->addItem(QString::number(deviceCount - 1));
    }
  
}

void DAQ_GUI_QT::onCheckboxAllStateChanged()
{
    if (ui.checkBox_all->isChecked())
    {
        ui.checkBox_ai_0->setChecked(true);
        ui.checkBox_ai_1->setChecked(true);
        ui.checkBox_ai_2->setChecked(true);
        ui.checkBox_ai_3->setChecked(true);
    }
    else
    {
        ui.checkBox_ai_0->setChecked(false);
        ui.checkBox_ai_1->setChecked(false);
        ui.checkBox_ai_2->setChecked(false);
        ui.checkBox_ai_3->setChecked(false);
    }
}

void DAQ_GUI_QT::onBtnConnectDAQClick()
{

    if (!isDeviceConnected)
    {
        if (ui.comboBox_devices->currentIndex() < 0)
        {
            QMessageBox::information(NULL, "error", "未选择设备");
            return;
        }
        int resCode;
       
        resCode = StopRead(0);
        CloseDevice(0);

        resCode = OpenDevice(ui.comboBox_devices->currentIndex());
        resCode = ResetDevice(deviceIndex);
        //打开设备出现错误
        if (resCode)
        {
            QMessageBox::information(NULL, "错误", getErrorMessage(resCode));
            return;
        }
        else
        {
           

            deviceIndex = ui.comboBox_devices->currentIndex();
            isDeviceConnected = true;

            ui.btn_connect_daq->setText("关闭采集卡");
            ui.label_is_connected->setStyleSheet(INDICATOR_DAQ_OPEN);

        }
    }
    else
    {
        /*if (timer_DI->isActive())
        {
            timer_DI->stop();
        }*/
        CloseDevice(deviceIndex);
        isDeviceConnected = false;

        ui.btn_connect_daq->setText("打开采集卡");
        ui.label_is_connected->setStyleSheet(INDICATOR_DAQ_CLOSE);
    }
    
}

void DAQ_GUI_QT::onBtnStartClicked()
{
    //timer_AI->start();
        //模拟信号通道数量
    int chansCount = 0;
    int resCode = 0;
    unsigned char chanMode = 0;
    int range = 0;
    unsigned int sampleRate = 0;

    chanSelAi[0] = ui.checkBox_ai_0->isChecked();
    chanSelAi[1] = ui.checkBox_ai_0->isChecked();

    chanSelAi[2] = ui.checkBox_ai_1->isChecked();
    chanSelAi[3] = ui.checkBox_ai_1->isChecked();

    chanSelAi[4] = ui.checkBox_ai_2->isChecked();
    chanSelAi[5] = ui.checkBox_ai_2->isChecked();

    chanSelAi[6] = ui.checkBox_ai_3->isChecked();
    chanSelAi[7] = ui.checkBox_ai_3->isChecked();
    
    for (int i = 0; i < 16; i++)
    {
        chanSel = chanSel << 1;
        chanSel = chanSel + chanSelAi[15 - i];
        if (chanSelAi[i] == 1)
        {
            chansCount = chansCount + chanSelAi[i];
        }
    }


    if (chansCount == 0)
    {
        QMessageBox::information(NULL, "error", "请至少选择一个通道");
        return;
    }
    //通道模式设置
    //chanMode = 0; //拆分模式
    switch (ui.comboBox_chan_mode->currentIndex())
    {
    case 0:
        chanMode = 0;
        break;
    case 1:
        chanMode = 1;
        break;
    case 2:
        chanMode = 2;
        break;
    default:
        break;
    }

    //量程设置
    switch (ui.comboBox_range->currentIndex())
    {
    case 0:
        range = 5;
        break;
    case 1:
        range = 10;
        break;
    default:
        break;
    }
    sampleRate = ui.lineEdit_sample_rate->text().toUInt();
    //pointsPerChan = ui.lineEdit_count->text().toInt();


    //QMessageBox::information(NULL, "info", QString::number(chanSel));
    
    
    
    if (isDeviceConnected)
    {
       

        taskGetAIPoints->setDeviceIndex(deviceIndex);
        taskGetAIPoints->setChanSel(chanSel);
        taskGetAIPoints->setNum(4000);
        taskGetAIPoints->setTimeOut(2000);
        taskGetAIPoints->setChanCount(chansCount);

        taskGetAIPoints->setChanMode(chanMode);
        taskGetAIPoints->setRange(range);
        taskGetAIPoints->setSampleRate(sampleRate);


        taskGetAIPoints->start();
        //ui.comboBox_chan_mode->setEnabled(false);
        
    }
    else
    {
        QMessageBox::information(NULL, "error", "未打开设备");
    }


}

void DAQ_GUI_QT::onBtnStopClicked()
{
    if (isDeviceConnected)
    {
        taskGetAIPoints->requestInterruption();
       
    }
    else
    {
        QMessageBox::information(NULL, "error", "未打开设备");
    }
}

//开始读取数字信号
void DAQ_GUI_QT::onBtnDIOStartClicked()
{
    if (isDeviceConnected)
    {
        int resCode = 0;
        resCode = StartRead(deviceIndex);
        resCode = TransDioIn(deviceIndex, 1);
        if (resCode)
            QMessageBox::information(NULL, "error", getErrorMessage(resCode));
        timer_DI->start(); 
    }
    else
    {
        QMessageBox::information(NULL, "error", "未连接采集卡");
    }
}

//停止读取数字信号
void DAQ_GUI_QT::onBtnDIOStopClicked()
{
    if(isDeviceConnected)
    {
        timer_DI->stop();
        int resCode = 0;
        resCode = TransDioIn(deviceIndex, 0);
        resCode = StopRead(deviceIndex);
        if (resCode)
            QMessageBox::information(NULL, "error", getErrorMessage(resCode));

        ui.label_enable->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_open->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_close->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_door_close_1->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_door_close_2->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_lock->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_v_signal->setStyleSheet(INDICATOR_DI_OFF);
        ui.label_v_signal_posSen->setStyleSheet(INDICATOR_DI_OFF);
    }
    else
    {
        QMessageBox::information(NULL, "error", "未连接采集卡");
    }
}

void DAQ_GUI_QT::indicatorControll()
{
    if (isDeviceConnected)
    {
        uint DIO_IN = 0;
        DIO_IN = GetDioIn(deviceIndex);
        for (int i = 0; i < 16; i++)
        {
            DI[i] = DIO_IN & 0x01;
            DIO_IN = DIO_IN >> 1;
        }
        //零速信号
        switch (DI[1])
        {
        case 0:
            ui.label_enable->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_enable->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }

        //集控开门
        switch (DI[2])
        {
        case 0:
            ui.label_open->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_open->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }

        //集控关门
        switch (DI[3])
        {
        case 0:
            ui.label_close->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_close->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }

        //门关闭1
        switch (DI[4])
        {
        case 0:
            ui.label_door_close_1->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_door_close_1->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }

        //门关闭2
        switch (DI[5])
        {
        case 0:
            ui.label_door_close_2->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_door_close_2->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }

        //锁到位
        switch (DI[6])
        {
        case 0:
            ui.label_lock->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_lock->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }


        //电源电压
        switch (DI[7])
        {
        case 0:
            ui.label_v_signal->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_v_signal->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }

        //位置传感器电源电压
        switch (DI[0])
        {
        case 0:
            ui.label_v_signal_posSen->setStyleSheet(INDICATOR_DI_OFF);
            break;
        case 1:
            ui.label_v_signal_posSen->setStyleSheet(INDICATOR_DI_ON);
            break;
        default:
            break;
        }
    }
    

}

void DAQ_GUI_QT::getCurrentTime()
{
    QDateTime currentTime = QDateTime::currentDateTime();
    QString current = currentTime.toString("MM/dd hh:mm:ss");
    ui.label_current_time->setText(current);
}

void DAQ_GUI_QT::drawPoints(int resCode, float* points, int size, int chanCount)
{
    QXlsx::Document xlsx;
    qDebug() << "rescode:" << resCode << " size: " << size << "ChanCount: " << chanCount;
    int ptsPerChan = size;
    int i = 0;
    int end = ptsPerChan;
    chanCount /= 2;
    int restChan = chanCount;


    if (ui.checkBox_ai_0->isChecked())
    {
        m_series_blokingBrake->clear();
        for (; i < end; i++)
        {
            m_series_blokingBrake->append((i - (ptsPerChan * (chanCount - restChan))) * 0.01, points[i]);
            
        }
        end += ptsPerChan;
        restChan--;
    }

    if (ui.checkBox_ai_1->isChecked())
    {
        m_series_elecmagBrake->clear();
        for (; i < end; i++)
        {
            m_series_elecmagBrake->append((i - (ptsPerChan * (chanCount - restChan))) * 0.01, points[i]);

        }
        end += ptsPerChan;
        restChan--;
    }

    if (ui.checkBox_ai_2->isChecked())
    {
        m_series_driveMotor->clear();
        for (; i < end; i++)
        {
            m_series_driveMotor->append((i - (ptsPerChan * (chanCount - restChan))) * 0.01, points[i]);
        }
        end += ptsPerChan;
        restChan--;
    }

    if (ui.checkBox_ai_3->isChecked())
    {
        m_series_posSensor->clear();
        for (; i < end; i++)
        {
            m_series_posSensor->append((i - (ptsPerChan * (chanCount - restChan))) * 0.01, points[i]);
        }
        end += ptsPerChan;
        restChan--;
    }
    xlsx.saveAs("data.xlsx");
    if(points != NULL)
        delete[] points;

}

QString DAQ_GUI_QT::getErrorMessage(int errorCode)
{
    switch (errorCode)
    {
    case -1:
        return "没有发现连接到计算机的 USB-1000 系列数据采集卡。";
        break;
    case -2:
        return "数据采集卡索引越界。";
        break;
    case -3:
        return "数据采集卡固件错误。";
        break;
    case -4:
        return "数据采集卡已关闭。";
        break;
    case -5:
        return "传输数据出错。";
        break;
    case -6:
        return "计算机没有足够的内存。";
        break;
    case -7:
        return "超时。";
        break;
    case -8:
        return "读数线程未启动.";
        break;
    default:
        break;
    }
    return QString();
}
