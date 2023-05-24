#pragma once
#pragma execution_character_set("utf-8")

#include <QtWidgets/QMainWindow>
#include "ui_DAQ_GUI_QT.h"
#include <QtCharts/QtCharts>
#include <usb-1000.h>
#include "GetAIPoints.h"

QT_CHARTS_USE_NAMESPACE

#define INDICATOR_DI_OFF "min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:16px;background-color: rgb(175, 176, 179);border-style: solid;border-width: 2px;border-color:rgb(131, 132, 135);"
#define INDICATOR_DI_ON "min-width:30px;min-height:30px;max-width:30px;max-height:30px;border-radius:16px;background-color: rgb(122, 189, 96);border-style: solid;border-width: 2px;border-color:rgb(131, 132, 135);"
#define INDICATOR_DAQ_CLOSE "min-width:14px;min-height:14px;max-width:14px;max-height:14px;border-radius: 8px;background-color: rgb(234, 70, 48);border-style: solid;border-width: 1px;border-color: rgb(131, 132, 135);"
#define INDICATOR_DAQ_OPEN "min-width:14px;min-height:14px;max-width:14px;max-height:14px;border-radius: 8px;background-color: rgb(122, 189, 96);border-style: solid;border-width: 1px;border-color: rgb(131, 132, 135);"
#define SWITCH_OFF "min-width:30px;min-height:30px;max-width:60px;max-height:30px;border-top-left-radius: 16px;border-bottom-left-radius: 16px;background-color: rgb(234, 70, 48);border-style: solid;border-width: 2px;border-color: rgb(131, 132, 135);color:rgb(255, 255, 255);"
#define SWICTH_ON "min-width:30px;min-height:30px;max-width:60px;max-height:30px;border-top-right-radius: 16px;border-bottom-right-radius: 16px;background-color: rgb(122, 189, 96);border-style: solid;border-width: 2px;border-color: rgb(131, 132, 135);color:rgb(255, 255, 255);"
#define SWITCH_OFF_COMMON "min-width:30px;min-height:30px;max-width:60px;max-height:30px;border-top-left-radius: 16px;border-bottom-left-radius: 16px;background-color: rgb(175, 176, 179);border-style: solid;border-width: 2px;border-color: rgb(131, 132, 135);color:rgb(255, 255, 255);"
#define SWICTH_ON_COMMON "min-width:30px;min-height:30px;max-width:60px;max-height:30px;border-top-right-radius: 16px;border-bottom-right-radius: 16px;background-color: rgb(175, 176, 179);border-style: solid;border-width: 2px;border-color: rgb(131, 132, 135);color:rgb(255, 255, 255);"

class DAQ_GUI_QT : public QMainWindow
{
    Q_OBJECT

public:
    DAQ_GUI_QT(QWidget *parent = Q_NULLPTR);

    

public slots:

    //设置
    void onBtnSettingClick();
    //刷新
    void onBtnRefreshClick();

    void onCheckboxAllStateChanged();
    void onBtnConnectDAQClick();

    //开始/结束显示波形
    void onBtnStartClicked();
    void onBtnStopClicked();

    //数字输入
    void onBtnDIOStartClicked();
    void onBtnDIOStopClicked();
    //数字输入指示灯
    void indicatorControll();

    void getCurrentTime();

    //void getAIInput();
    void drawPoints(int resCode, float* points, int size, int chanCount);

private:
    Ui::DAQ_GUI_QTClass ui;
    //连接到电脑的采集卡数量
    int deviceCount;
    //是否连接到采集卡
    bool isDeviceConnected;
    //连接采集卡的id
    int deviceIndex;
    //模拟信号通道
    ushort chanSel;
    int chanSelAi[16];

    //每个通道采集的点数
    //int pointsPerChan;

    GetAIPoints* taskGetAIPoints;

    //chart
    QLineSeries* m_series_posSensor;
    QLineSeries* m_series_driveMotor;
    QLineSeries* m_series_blokingBrake;
    QLineSeries* m_series_elecmagBrake;

    QValueAxis* m_axisX;
    QValueAxis* m_axisY;


    bool doorSwitchStatus;

    //errocode
    QString getErrorMessage(int errorCode);

    QTimer* timer_DI;
    QTimer* timer_current;
    QTimer* timer_AI;

    int DO[16];
    int DI[16];
};
