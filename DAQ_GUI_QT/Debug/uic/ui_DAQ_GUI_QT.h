/********************************************************************************
** Form generated from reading UI file 'DAQ_GUI_QT.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAQ_GUI_QT_H
#define UI_DAQ_GUI_QT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCharts/QChartView>

QT_BEGIN_NAMESPACE

class Ui_DAQ_GUI_QTClass
{
public:
    QAction *action;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_3;
    QtCharts::QChartView *chartView_0;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_15;
    QLabel *label_time_open_door;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_17;
    QLabel *label_time_close_door_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_27;
    QLabel *label_current_time;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_7;
    QLineEdit *lineEdit_count;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_enable;
    QLabel *label_19;
    QHBoxLayout *horizontalLayout_21;
    QLabel *label_open;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_22;
    QLabel *label_close;
    QLabel *label_21;
    QHBoxLayout *horizontalLayout_23;
    QLabel *label_door_close_1;
    QLabel *label_22;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_door_close_2;
    QLabel *label_23;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_lock;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_29;
    QLabel *label_v_signal;
    QLabel *label_26;
    QHBoxLayout *horizontalLayout_28;
    QLabel *label_v_signal_posSen;
    QLabel *label_25;
    QPushButton *btn_start_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_9;
    QLabel *label_daq_count;
    QPushButton *btn_refresh;
    QPushButton *btn_start;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_2;
    QComboBox *comboBox_chan_mode;
    QPushButton *btn_dio_stop;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QPushButton *btn_dio_start;
    QPushButton *btn_stop;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_4;
    QComboBox *comboBox_devices;
    QPushButton *btn_connect_daq;
    QLabel *label_is_connected;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *checkBox_all;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_19;
    QCheckBox *checkBox_ai_0;
    QLineEdit *lineEdit_4;
    QLabel *label_13;
    QHBoxLayout *horizontalLayout_18;
    QCheckBox *checkBox_ai_1;
    QLineEdit *lineEdit_5;
    QLabel *label_14;
    QHBoxLayout *horizontalLayout_20;
    QCheckBox *checkBox_ai_2;
    QLineEdit *lineEdit_16;
    QLabel *label_12;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *checkBox_ai_3;
    QLineEdit *lineEdit;
    QLabel *label_8;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_8;
    QLabel *label_6;
    QLineEdit *lineEdit_sample_rate;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_5;
    QComboBox *comboBox_range;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *DAQ_GUI_QTClass)
    {
        if (DAQ_GUI_QTClass->objectName().isEmpty())
            DAQ_GUI_QTClass->setObjectName("DAQ_GUI_QTClass");
        DAQ_GUI_QTClass->resize(1035, 694);
        action = new QAction(DAQ_GUI_QTClass);
        action->setObjectName("action");
        centralWidget = new QWidget(DAQ_GUI_QTClass);
        centralWidget->setObjectName("centralWidget");
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(0, 0, 1031, 661));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_3 = new QWidget();
        scrollAreaWidgetContents_3->setObjectName("scrollAreaWidgetContents_3");
        scrollAreaWidgetContents_3->setGeometry(QRect(0, 0, 1029, 659));
        chartView_0 = new QtCharts::QChartView(scrollAreaWidgetContents_3);
        chartView_0->setObjectName("chartView_0");
        chartView_0->setGeometry(QRect(190, 90, 571, 471));
        verticalLayoutWidget_7 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_7->setObjectName("verticalLayoutWidget_7");
        verticalLayoutWidget_7->setGeometry(QRect(770, 540, 160, 101));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_15 = new QLabel(verticalLayoutWidget_7);
        label_15->setObjectName("label_15");

        horizontalLayout_2->addWidget(label_15);

        label_time_open_door = new QLabel(verticalLayoutWidget_7);
        label_time_open_door->setObjectName("label_time_open_door");

        horizontalLayout_2->addWidget(label_time_open_door);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label_17 = new QLabel(verticalLayoutWidget_7);
        label_17->setObjectName("label_17");

        horizontalLayout_7->addWidget(label_17);

        label_time_close_door_2 = new QLabel(verticalLayoutWidget_7);
        label_time_close_door_2->setObjectName("label_time_close_door_2");

        horizontalLayout_7->addWidget(label_time_close_door_2);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_27 = new QLabel(verticalLayoutWidget_7);
        label_27->setObjectName("label_27");

        horizontalLayout_8->addWidget(label_27);

        label_current_time = new QLabel(verticalLayoutWidget_7);
        label_current_time->setObjectName("label_current_time");

        horizontalLayout_8->addWidget(label_current_time);


        verticalLayout->addLayout(horizontalLayout_8);

        verticalLayoutWidget_4 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_4->setObjectName("verticalLayoutWidget_4");
        verticalLayoutWidget_4->setGeometry(QRect(20, 340, 61, 44));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_4);
        label_7->setObjectName("label_7");

        verticalLayout_9->addWidget(label_7);

        lineEdit_count = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_count->setObjectName("lineEdit_count");

        verticalLayout_9->addWidget(lineEdit_count);

        verticalLayoutWidget_6 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_6->setObjectName("verticalLayoutWidget_6");
        verticalLayoutWidget_6->setGeometry(QRect(770, 130, 259, 401));
        verticalLayout_10 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_enable = new QLabel(verticalLayoutWidget_6);
        label_enable->setObjectName("label_enable");
        label_enable->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_4->addWidget(label_enable);

        label_19 = new QLabel(verticalLayoutWidget_6);
        label_19->setObjectName("label_19");
        QFont font;
        font.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font.setPointSize(10);
        font.setBold(false);
        label_19->setFont(font);

        horizontalLayout_4->addWidget(label_19);


        verticalLayout_10->addLayout(horizontalLayout_4);

        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setSpacing(6);
        horizontalLayout_21->setObjectName("horizontalLayout_21");
        label_open = new QLabel(verticalLayoutWidget_6);
        label_open->setObjectName("label_open");
        label_open->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_21->addWidget(label_open);

        label_20 = new QLabel(verticalLayoutWidget_6);
        label_20->setObjectName("label_20");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\347\255\211\347\272\277")});
        font1.setPointSize(10);
        label_20->setFont(font1);

        horizontalLayout_21->addWidget(label_20);


        verticalLayout_10->addLayout(horizontalLayout_21);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setSpacing(6);
        horizontalLayout_22->setObjectName("horizontalLayout_22");
        label_close = new QLabel(verticalLayoutWidget_6);
        label_close->setObjectName("label_close");
        label_close->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_22->addWidget(label_close);

        label_21 = new QLabel(verticalLayoutWidget_6);
        label_21->setObjectName("label_21");
        label_21->setFont(font1);

        horizontalLayout_22->addWidget(label_21);


        verticalLayout_10->addLayout(horizontalLayout_22);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setSpacing(6);
        horizontalLayout_23->setObjectName("horizontalLayout_23");
        label_door_close_1 = new QLabel(verticalLayoutWidget_6);
        label_door_close_1->setObjectName("label_door_close_1");
        label_door_close_1->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_23->addWidget(label_door_close_1);

        label_22 = new QLabel(verticalLayoutWidget_6);
        label_22->setObjectName("label_22");
        label_22->setFont(font1);

        horizontalLayout_23->addWidget(label_22);


        verticalLayout_10->addLayout(horizontalLayout_23);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName("horizontalLayout_26");
        label_door_close_2 = new QLabel(verticalLayoutWidget_6);
        label_door_close_2->setObjectName("label_door_close_2");
        label_door_close_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_26->addWidget(label_door_close_2);

        label_23 = new QLabel(verticalLayoutWidget_6);
        label_23->setObjectName("label_23");
        label_23->setFont(font1);

        horizontalLayout_26->addWidget(label_23);


        verticalLayout_10->addLayout(horizontalLayout_26);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName("horizontalLayout_27");
        label_lock = new QLabel(verticalLayoutWidget_6);
        label_lock->setObjectName("label_lock");
        label_lock->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_27->addWidget(label_lock);

        label_24 = new QLabel(verticalLayoutWidget_6);
        label_24->setObjectName("label_24");
        label_24->setFont(font1);

        horizontalLayout_27->addWidget(label_24);


        verticalLayout_10->addLayout(horizontalLayout_27);

        horizontalLayout_29 = new QHBoxLayout();
        horizontalLayout_29->setSpacing(6);
        horizontalLayout_29->setObjectName("horizontalLayout_29");
        label_v_signal = new QLabel(verticalLayoutWidget_6);
        label_v_signal->setObjectName("label_v_signal");
        label_v_signal->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_29->addWidget(label_v_signal);

        label_26 = new QLabel(verticalLayoutWidget_6);
        label_26->setObjectName("label_26");
        label_26->setFont(font1);

        horizontalLayout_29->addWidget(label_26);


        verticalLayout_10->addLayout(horizontalLayout_29);

        horizontalLayout_28 = new QHBoxLayout();
        horizontalLayout_28->setSpacing(6);
        horizontalLayout_28->setObjectName("horizontalLayout_28");
        label_v_signal_posSen = new QLabel(verticalLayoutWidget_6);
        label_v_signal_posSen->setObjectName("label_v_signal_posSen");
        label_v_signal_posSen->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_28->addWidget(label_v_signal_posSen);

        label_25 = new QLabel(verticalLayoutWidget_6);
        label_25->setObjectName("label_25");
        label_25->setFont(font1);

        horizontalLayout_28->addWidget(label_25);


        verticalLayout_10->addLayout(horizontalLayout_28);

        btn_start_2 = new QPushButton(scrollAreaWidgetContents_3);
        btn_start_2->setObjectName("btn_start_2");
        btn_start_2->setEnabled(false);
        btn_start_2->setGeometry(QRect(450, 13, 56, 21));
        btn_start_2->setCheckable(false);
        btn_start_2->setChecked(false);
        horizontalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents_3);
        horizontalLayoutWidget_3->setObjectName("horizontalLayoutWidget_3");
        horizontalLayoutWidget_3->setGeometry(QRect(10, 10, 265, 26));
        horizontalLayout_24 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_24->setSpacing(6);
        horizontalLayout_24->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_24->setObjectName("horizontalLayout_24");
        horizontalLayout_24->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(horizontalLayoutWidget_3);
        label_9->setObjectName("label_9");

        horizontalLayout_24->addWidget(label_9);

        label_daq_count = new QLabel(horizontalLayoutWidget_3);
        label_daq_count->setObjectName("label_daq_count");
        label_daq_count->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_24->addWidget(label_daq_count);

        btn_refresh = new QPushButton(horizontalLayoutWidget_3);
        btn_refresh->setObjectName("btn_refresh");

        horizontalLayout_24->addWidget(btn_refresh);

        btn_start = new QPushButton(scrollAreaWidgetContents_3);
        btn_start->setObjectName("btn_start");
        btn_start->setGeometry(QRect(100, 340, 51, 21));
        verticalLayoutWidget = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 230, 160, 45));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName("label_2");

        verticalLayout_5->addWidget(label_2);

        comboBox_chan_mode = new QComboBox(verticalLayoutWidget);
        comboBox_chan_mode->addItem(QString());
        comboBox_chan_mode->addItem(QString());
        comboBox_chan_mode->addItem(QString());
        comboBox_chan_mode->setObjectName("comboBox_chan_mode");

        verticalLayout_5->addWidget(comboBox_chan_mode);

        btn_dio_stop = new QPushButton(scrollAreaWidgetContents_3);
        btn_dio_stop->setObjectName("btn_dio_stop");
        btn_dio_stop->setGeometry(QRect(840, 90, 71, 31));
        horizontalLayoutWidget = new QWidget(scrollAreaWidgetContents_3);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(190, 60, 131, 21));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget);
        label->setObjectName("label");
        label->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(label);

        btn_dio_start = new QPushButton(scrollAreaWidgetContents_3);
        btn_dio_start->setObjectName("btn_dio_start");
        btn_dio_start->setGeometry(QRect(770, 90, 71, 31));
        btn_stop = new QPushButton(scrollAreaWidgetContents_3);
        btn_stop->setObjectName("btn_stop");
        btn_stop->setGeometry(QRect(100, 360, 51, 21));
        horizontalLayoutWidget_5 = new QWidget(scrollAreaWidgetContents_3);
        horizontalLayoutWidget_5->setObjectName("horizontalLayoutWidget_5");
        horizontalLayoutWidget_5->setGeometry(QRect(220, 10, 240, 26));
        horizontalLayout_25 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_25->setObjectName("horizontalLayout_25");
        horizontalLayout_25->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(horizontalLayoutWidget_5);
        label_4->setObjectName("label_4");

        horizontalLayout_25->addWidget(label_4);

        comboBox_devices = new QComboBox(horizontalLayoutWidget_5);
        comboBox_devices->setObjectName("comboBox_devices");

        horizontalLayout_25->addWidget(comboBox_devices);

        btn_connect_daq = new QPushButton(horizontalLayoutWidget_5);
        btn_connect_daq->setObjectName("btn_connect_daq");

        horizontalLayout_25->addWidget(btn_connect_daq);

        label_is_connected = new QLabel(horizontalLayoutWidget_5);
        label_is_connected->setObjectName("label_is_connected");
        label_is_connected->setStyleSheet(QString::fromUtf8("min-width:     14px;    \n"
"min-height:    14px;    \n"
"max-width:     14px;   \n"
"max-height:    14px;   \n"
"border-radius: 8px;      \n"
"background-color: rgb(234, 70, 48);\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_25->addWidget(label_is_connected);

        verticalLayoutWidget_5 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_5->setObjectName("verticalLayoutWidget_5");
        verticalLayoutWidget_5->setGeometry(QRect(20, 60, 151, 142));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        checkBox_all = new QCheckBox(verticalLayoutWidget_5);
        checkBox_all->setObjectName("checkBox_all");

        horizontalLayout_6->addWidget(checkBox_all);

        label_3 = new QLabel(verticalLayoutWidget_5);
        label_3->setObjectName("label_3");

        horizontalLayout_6->addWidget(label_3);


        verticalLayout_7->addLayout(horizontalLayout_6);

        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setSpacing(6);
        horizontalLayout_19->setObjectName("horizontalLayout_19");
        checkBox_ai_0 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_0->setObjectName("checkBox_ai_0");

        horizontalLayout_19->addWidget(checkBox_ai_0);

        lineEdit_4 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_4->setObjectName("lineEdit_4");

        horizontalLayout_19->addWidget(lineEdit_4);

        label_13 = new QLabel(verticalLayoutWidget_5);
        label_13->setObjectName("label_13");
        label_13->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 24);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_19->addWidget(label_13);


        verticalLayout_7->addLayout(horizontalLayout_19);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setSpacing(6);
        horizontalLayout_18->setObjectName("horizontalLayout_18");
        checkBox_ai_1 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_1->setObjectName("checkBox_ai_1");

        horizontalLayout_18->addWidget(checkBox_ai_1);

        lineEdit_5 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_5->setObjectName("lineEdit_5");

        horizontalLayout_18->addWidget(lineEdit_5);

        label_14 = new QLabel(verticalLayoutWidget_5);
        label_14->setObjectName("label_14");
        label_14->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 249);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_18->addWidget(label_14);


        verticalLayout_7->addLayout(horizontalLayout_18);

        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setSpacing(6);
        horizontalLayout_20->setObjectName("horizontalLayout_20");
        checkBox_ai_2 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_2->setObjectName("checkBox_ai_2");

        horizontalLayout_20->addWidget(checkBox_ai_2);

        lineEdit_16 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_16->setObjectName("lineEdit_16");

        horizontalLayout_20->addWidget(lineEdit_16);

        label_12 = new QLabel(verticalLayoutWidget_5);
        label_12->setObjectName("label_12");
        label_12->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 0, 125);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_20->addWidget(label_12);


        verticalLayout_7->addLayout(horizontalLayout_20);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        checkBox_ai_3 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_3->setObjectName("checkBox_ai_3");

        horizontalLayout_3->addWidget(checkBox_ai_3);

        lineEdit = new QLineEdit(verticalLayoutWidget_5);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout_3->addWidget(lineEdit);

        label_8 = new QLabel(verticalLayoutWidget_5);
        label_8->setObjectName("label_8");
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 24);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_3->addWidget(label_8);


        verticalLayout_7->addLayout(horizontalLayout_3);

        verticalLayoutWidget_3 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_3->setObjectName("verticalLayoutWidget_3");
        verticalLayoutWidget_3->setGeometry(QRect(80, 280, 80, 44));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(verticalLayoutWidget_3);
        label_6->setObjectName("label_6");

        verticalLayout_8->addWidget(label_6);

        lineEdit_sample_rate = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_sample_rate->setObjectName("lineEdit_sample_rate");

        verticalLayout_8->addWidget(lineEdit_sample_rate);

        verticalLayoutWidget_2 = new QWidget(scrollAreaWidgetContents_3);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 280, 66, 45));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(verticalLayoutWidget_2);
        label_5->setObjectName("label_5");

        verticalLayout_6->addWidget(label_5);

        comboBox_range = new QComboBox(verticalLayoutWidget_2);
        comboBox_range->addItem(QString());
        comboBox_range->addItem(QString());
        comboBox_range->setObjectName("comboBox_range");

        verticalLayout_6->addWidget(comboBox_range);

        scrollArea->setWidget(scrollAreaWidgetContents_3);
        DAQ_GUI_QTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DAQ_GUI_QTClass);
        statusBar->setObjectName("statusBar");
        DAQ_GUI_QTClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(DAQ_GUI_QTClass);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 1035, 22));
        menu = new QMenu(menuBar);
        menu->setObjectName("menu");
        DAQ_GUI_QTClass->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(DAQ_GUI_QTClass);

        QMetaObject::connectSlotsByName(DAQ_GUI_QTClass);
    } // setupUi

    void retranslateUi(QMainWindow *DAQ_GUI_QTClass)
    {
        DAQ_GUI_QTClass->setWindowTitle(QCoreApplication::translate("DAQ_GUI_QTClass", "DAQ_GUI_QT", nullptr));
        action->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        label_15->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\274\200\351\227\250\346\227\266\351\227\264\357\274\232", nullptr));
        label_time_open_door->setText(QString());
        label_17->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\205\263\351\227\250\346\227\266\351\227\264\357\274\232", nullptr));
        label_time_close_door_2->setText(QString());
        label_27->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", nullptr));
        label_current_time->setText(QString());
        label_7->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\207\207\351\233\206\346\254\241\346\225\260:", nullptr));
        lineEdit_count->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "0", nullptr));
        label_enable->setText(QString());
        label_19->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\233\266\351\200\237\344\277\241\345\217\267", nullptr));
        label_open->setText(QString());
        label_20->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\233\206\346\216\247\345\274\200\351\227\250", nullptr));
        label_close->setText(QString());
        label_21->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\233\206\346\216\247\345\205\263\351\227\250", nullptr));
        label_door_close_1->setText(QString());
        label_22->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\227\250\345\205\263\351\227\2551", nullptr));
        label_door_close_2->setText(QString());
        label_23->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\227\250\345\205\263\351\227\2552", nullptr));
        label_lock->setText(QString());
        label_24->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\224\201\345\210\260\344\275\215", nullptr));
        label_v_signal->setText(QString());
        label_26->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\347\224\265\346\272\220\347\224\265\345\216\213", nullptr));
        label_v_signal_posSen->setText(QString());
        label_25->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\344\275\215\347\275\256\344\274\240\346\204\237\345\231\250\347\224\265\346\272\220\347\224\265\345\216\213\344\277\241\345\217\267", nullptr));
        btn_start_2->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\274\200\345\247\213", nullptr));
        label_9->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\275\223\345\211\215\350\277\236\346\216\245\345\210\260\347\224\265\350\204\221\347\232\204\351\207\207\351\233\206\345\215\241\346\225\260\351\207\217\357\274\232", nullptr));
        label_daq_count->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "<html><head/><body><p>0</p></body></html>", nullptr));
        btn_refresh->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\210\267\346\226\260", nullptr));
        btn_start->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\274\200\345\247\213", nullptr));
        label_2->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\200\232\351\201\223\346\250\241\345\274\217:", nullptr));
        comboBox_chan_mode->setItemText(0, QCoreApplication::translate("DAQ_GUI_QTClass", "1.DIFF(\345\267\256\345\210\206\346\250\241\345\274\217)", nullptr));
        comboBox_chan_mode->setItemText(1, QCoreApplication::translate("DAQ_GUI_QTClass", "2.NRSE(\351\235\236\346\216\245\345\234\260\345\217\202\350\200\203\345\215\225\347\253\257)", nullptr));
        comboBox_chan_mode->setItemText(2, QCoreApplication::translate("DAQ_GUI_QTClass", "3.RSE(\346\216\245\345\234\260\345\217\202\350\200\203\345\215\225\347\253\257)", nullptr));

        btn_dio_stop->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\201\234\346\255\242", nullptr));
        label->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\275\223\345\211\215\346\263\242\345\275\242\357\274\232", nullptr));
        btn_dio_start->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
        btn_stop->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\347\273\223\346\235\237", nullptr));
        label_4->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\207\207\351\233\206\345\215\241ID\357\274\232", nullptr));
        btn_connect_daq->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\346\211\223\345\274\200\351\207\207\351\233\206\345\215\241", nullptr));
        label_is_connected->setText(QString());
        checkBox_all->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\345\205\250\351\200\211", nullptr));
        label_3->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\200\232\351\201\223\346\263\250\351\207\212", nullptr));
        checkBox_ai_0->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "AI 0", nullptr));
        lineEdit_4->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\344\270\273\350\275\264\351\230\273\345\241\236\345\210\266\345\212\250\345\231\250", nullptr));
        label_13->setText(QString());
        checkBox_ai_1->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "AI 1", nullptr));
        lineEdit_5->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\347\224\265\347\243\201\345\210\266\345\212\250\345\231\250\357\274\210\350\247\243\351\224\201\357\274\211", nullptr));
        label_14->setText(QString());
        checkBox_ai_2->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "AI 2", nullptr));
        lineEdit_16->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\251\261\345\212\250\347\224\265\346\234\272\344\277\241\345\217\267", nullptr));
        label_12->setText(QString());
        checkBox_ai_3->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "AI 3", nullptr));
        lineEdit->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\344\275\215\347\275\256\344\274\240\346\204\237\345\231\250\351\200\232\351\201\223A/B", nullptr));
        label_8->setText(QString());
        label_6->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\207\207\346\240\267\347\216\207(Sps/s):", nullptr));
        lineEdit_sample_rate->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "4000", nullptr));
        label_5->setText(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\207\217\347\250\213:", nullptr));
        comboBox_range->setItemText(0, QCoreApplication::translate("DAQ_GUI_QTClass", "-5~5V", nullptr));
        comboBox_range->setItemText(1, QCoreApplication::translate("DAQ_GUI_QTClass", "0~10V", nullptr));

        menu->setTitle(QCoreApplication::translate("DAQ_GUI_QTClass", "\351\200\211\351\241\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAQ_GUI_QTClass: public Ui_DAQ_GUI_QTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAQ_GUI_QT_H
