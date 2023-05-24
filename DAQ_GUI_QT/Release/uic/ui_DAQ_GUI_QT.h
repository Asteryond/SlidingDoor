/********************************************************************************
** Form generated from reading UI file 'DAQ_GUI_QT.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DAQ_GUI_QT_H
#define UI_DAQ_GUI_QT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
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
#include <qchartview.h>

QT_BEGIN_NAMESPACE

class Ui_DAQ_GUI_QTClass
{
public:
    QAction *action;
    QWidget *centralWidget;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QtCharts::QChartView *chartView_0;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_11;
    QHBoxLayout *horizontalLayout_9;
    QCheckBox *checkBox_all_2;
    QLabel *label_10;
    QHBoxLayout *horizontalLayout_30;
    QCheckBox *checkBox_ai_4;
    QLineEdit *lineEdit_6;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_31;
    QCheckBox *checkBox_ai_5;
    QLineEdit *lineEdit_7;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_32;
    QCheckBox *checkBox_ai_6;
    QLineEdit *lineEdit_17;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *checkBox_ai_7;
    QLineEdit *lineEdit_2;
    QLabel *label_11;
    QPushButton *btn_dio_stop;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_12;
    QLabel *label_29;
    QLineEdit *lineEdit_sample_rate_2;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_30;
    QLabel *label_time_open_door_2;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_31;
    QLabel *label_time_close_door_3;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_32;
    QLabel *label_current_time_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_33;
    QComboBox *comboBox_range_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_33;
    QLabel *label_34;
    QLabel *label_daq_count_2;
    QPushButton *btn_refresh_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_enable_2;
    QLabel *label_35;
    QHBoxLayout *horizontalLayout_34;
    QLabel *label_open_2;
    QLabel *label_36;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_close_2;
    QLabel *label_37;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_door_close_3;
    QLabel *label_38;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_door_close_4;
    QLabel *label_39;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_lock_2;
    QLabel *label_40;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_v_signal_2;
    QLabel *label_41;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_v_signal_posSen_2;
    QLabel *label_42;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_43;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout_41;
    QLabel *label_44;
    QComboBox *comboBox_devices_2;
    QPushButton *btn_connect_daq_2;
    QLabel *label_is_connected_2;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_15;
    QLabel *label_45;
    QLineEdit *lineEdit_count_2;
    QPushButton *btn_start;
    QPushButton *btn_dio_start;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout_16;
    QLabel *label_46;
    QComboBox *comboBox_chan_mode_2;
    QPushButton *btn_stop;
    QPushButton *btn_start_2;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menu;

    void setupUi(QMainWindow *DAQ_GUI_QTClass)
    {
        if (DAQ_GUI_QTClass->objectName().isEmpty())
            DAQ_GUI_QTClass->setObjectName(QString::fromUtf8("DAQ_GUI_QTClass"));
        DAQ_GUI_QTClass->resize(1036, 681);
        action = new QAction(DAQ_GUI_QTClass);
        action->setObjectName(QString::fromUtf8("action"));
        centralWidget = new QWidget(DAQ_GUI_QTClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMaximumSize(QSize(16777215, 16777215));
        scrollArea = new QScrollArea(centralWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setGeometry(QRect(0, 0, 1031, 641));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1029, 639));
        scrollArea->setWidget(scrollAreaWidgetContents);
        chartView_0 = new QtCharts::QChartView(centralWidget);
        chartView_0->setObjectName(QString::fromUtf8("chartView_0"));
        chartView_0->setGeometry(QRect(190, 87, 571, 471));
        verticalLayoutWidget_5 = new QWidget(centralWidget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(20, 57, 151, 142));
        verticalLayout_11 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        checkBox_all_2 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_all_2->setObjectName(QString::fromUtf8("checkBox_all_2"));

        horizontalLayout_9->addWidget(checkBox_all_2);

        label_10 = new QLabel(verticalLayoutWidget_5);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);


        verticalLayout_11->addLayout(horizontalLayout_9);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setSpacing(6);
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        checkBox_ai_4 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_4->setObjectName(QString::fromUtf8("checkBox_ai_4"));

        horizontalLayout_30->addWidget(checkBox_ai_4);

        lineEdit_6 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));

        horizontalLayout_30->addWidget(lineEdit_6);

        label_16 = new QLabel(verticalLayoutWidget_5);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 128, 24);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_30->addWidget(label_16);


        verticalLayout_11->addLayout(horizontalLayout_30);

        horizontalLayout_31 = new QHBoxLayout();
        horizontalLayout_31->setSpacing(6);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        checkBox_ai_5 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_5->setObjectName(QString::fromUtf8("checkBox_ai_5"));

        horizontalLayout_31->addWidget(checkBox_ai_5);

        lineEdit_7 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));

        horizontalLayout_31->addWidget(lineEdit_7);

        label_18 = new QLabel(verticalLayoutWidget_5);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 249);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_31->addWidget(label_18);


        verticalLayout_11->addLayout(horizontalLayout_31);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setSpacing(6);
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        checkBox_ai_6 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_6->setObjectName(QString::fromUtf8("checkBox_ai_6"));

        horizontalLayout_32->addWidget(checkBox_ai_6);

        lineEdit_17 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_17->setObjectName(QString::fromUtf8("lineEdit_17"));

        horizontalLayout_32->addWidget(lineEdit_17);

        label_28 = new QLabel(verticalLayoutWidget_5);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setStyleSheet(QString::fromUtf8("background-color: rgb(134, 0, 125);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_32->addWidget(label_28);


        verticalLayout_11->addLayout(horizontalLayout_32);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        checkBox_ai_7 = new QCheckBox(verticalLayoutWidget_5);
        checkBox_ai_7->setObjectName(QString::fromUtf8("checkBox_ai_7"));

        horizontalLayout_5->addWidget(checkBox_ai_7);

        lineEdit_2 = new QLineEdit(verticalLayoutWidget_5);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));

        horizontalLayout_5->addWidget(lineEdit_2);

        label_11 = new QLabel(verticalLayoutWidget_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 0, 24);\n"
"min-width:     10px;    \n"
"min-height:    10px;    \n"
"max-width:     10px;   \n"
"max-height:    10px; \n"
"border-style: solid;\n"
"border-width: 1px;"));

        horizontalLayout_5->addWidget(label_11);


        verticalLayout_11->addLayout(horizontalLayout_5);

        btn_dio_stop = new QPushButton(centralWidget);
        btn_dio_stop->setObjectName(QString::fromUtf8("btn_dio_stop"));
        btn_dio_stop->setGeometry(QRect(840, 87, 71, 31));
        verticalLayoutWidget_3 = new QWidget(centralWidget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(80, 277, 68, 41));
        verticalLayout_12 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        label_29 = new QLabel(verticalLayoutWidget_3);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        verticalLayout_12->addWidget(label_29);

        lineEdit_sample_rate_2 = new QLineEdit(verticalLayoutWidget_3);
        lineEdit_sample_rate_2->setObjectName(QString::fromUtf8("lineEdit_sample_rate_2"));

        verticalLayout_12->addWidget(lineEdit_sample_rate_2);

        verticalLayoutWidget_7 = new QWidget(centralWidget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(770, 537, 160, 101));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_30 = new QLabel(verticalLayoutWidget_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_10->addWidget(label_30);

        label_time_open_door_2 = new QLabel(verticalLayoutWidget_7);
        label_time_open_door_2->setObjectName(QString::fromUtf8("label_time_open_door_2"));

        horizontalLayout_10->addWidget(label_time_open_door_2);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_31 = new QLabel(verticalLayoutWidget_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_11->addWidget(label_31);

        label_time_close_door_3 = new QLabel(verticalLayoutWidget_7);
        label_time_close_door_3->setObjectName(QString::fromUtf8("label_time_close_door_3"));

        horizontalLayout_11->addWidget(label_time_close_door_3);


        verticalLayout_2->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_32 = new QLabel(verticalLayoutWidget_7);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_12->addWidget(label_32);

        label_current_time_2 = new QLabel(verticalLayoutWidget_7);
        label_current_time_2->setObjectName(QString::fromUtf8("label_current_time_2"));

        horizontalLayout_12->addWidget(label_current_time_2);


        verticalLayout_2->addLayout(horizontalLayout_12);

        verticalLayoutWidget_2 = new QWidget(centralWidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(20, 277, 51, 41));
        verticalLayout_13 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        label_33 = new QLabel(verticalLayoutWidget_2);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        verticalLayout_13->addWidget(label_33);

        comboBox_range_2 = new QComboBox(verticalLayoutWidget_2);
        comboBox_range_2->addItem(QString());
        comboBox_range_2->addItem(QString());
        comboBox_range_2->setObjectName(QString::fromUtf8("comboBox_range_2"));

        verticalLayout_13->addWidget(comboBox_range_2);

        horizontalLayoutWidget_3 = new QWidget(centralWidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(10, 7, 197, 21));
        horizontalLayout_33 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_33->setSpacing(6);
        horizontalLayout_33->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_33->setObjectName(QString::fromUtf8("horizontalLayout_33"));
        horizontalLayout_33->setContentsMargins(0, 0, 0, 0);
        label_34 = new QLabel(horizontalLayoutWidget_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_33->addWidget(label_34);

        label_daq_count_2 = new QLabel(horizontalLayoutWidget_3);
        label_daq_count_2->setObjectName(QString::fromUtf8("label_daq_count_2"));
        label_daq_count_2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_33->addWidget(label_daq_count_2);

        btn_refresh_2 = new QPushButton(horizontalLayoutWidget_3);
        btn_refresh_2->setObjectName(QString::fromUtf8("btn_refresh_2"));

        horizontalLayout_33->addWidget(btn_refresh_2);

        verticalLayoutWidget_6 = new QWidget(centralWidget);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(770, 127, 259, 401));
        verticalLayout_14 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_enable_2 = new QLabel(verticalLayoutWidget_6);
        label_enable_2->setObjectName(QString::fromUtf8("label_enable_2"));
        label_enable_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_13->addWidget(label_enable_2);

        label_35 = new QLabel(verticalLayoutWidget_6);
        label_35->setObjectName(QString::fromUtf8("label_35"));
        QFont font;
        font.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font.setPointSize(10);
        font.setBold(false);
        font.setWeight(50);
        label_35->setFont(font);

        horizontalLayout_13->addWidget(label_35);


        verticalLayout_14->addLayout(horizontalLayout_13);

        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setSpacing(6);
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        label_open_2 = new QLabel(verticalLayoutWidget_6);
        label_open_2->setObjectName(QString::fromUtf8("label_open_2"));
        label_open_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_34->addWidget(label_open_2);

        label_36 = new QLabel(verticalLayoutWidget_6);
        label_36->setObjectName(QString::fromUtf8("label_36"));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\347\255\211\347\272\277"));
        font1.setPointSize(10);
        label_36->setFont(font1);

        horizontalLayout_34->addWidget(label_36);


        verticalLayout_14->addLayout(horizontalLayout_34);

        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setSpacing(6);
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        label_close_2 = new QLabel(verticalLayoutWidget_6);
        label_close_2->setObjectName(QString::fromUtf8("label_close_2"));
        label_close_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_35->addWidget(label_close_2);

        label_37 = new QLabel(verticalLayoutWidget_6);
        label_37->setObjectName(QString::fromUtf8("label_37"));
        label_37->setFont(font1);

        horizontalLayout_35->addWidget(label_37);


        verticalLayout_14->addLayout(horizontalLayout_35);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setSpacing(6);
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_door_close_3 = new QLabel(verticalLayoutWidget_6);
        label_door_close_3->setObjectName(QString::fromUtf8("label_door_close_3"));
        label_door_close_3->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_36->addWidget(label_door_close_3);

        label_38 = new QLabel(verticalLayoutWidget_6);
        label_38->setObjectName(QString::fromUtf8("label_38"));
        label_38->setFont(font1);

        horizontalLayout_36->addWidget(label_38);


        verticalLayout_14->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setSpacing(6);
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_door_close_4 = new QLabel(verticalLayoutWidget_6);
        label_door_close_4->setObjectName(QString::fromUtf8("label_door_close_4"));
        label_door_close_4->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_37->addWidget(label_door_close_4);

        label_39 = new QLabel(verticalLayoutWidget_6);
        label_39->setObjectName(QString::fromUtf8("label_39"));
        label_39->setFont(font1);

        horizontalLayout_37->addWidget(label_39);


        verticalLayout_14->addLayout(horizontalLayout_37);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setSpacing(6);
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_lock_2 = new QLabel(verticalLayoutWidget_6);
        label_lock_2->setObjectName(QString::fromUtf8("label_lock_2"));
        label_lock_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_38->addWidget(label_lock_2);

        label_40 = new QLabel(verticalLayoutWidget_6);
        label_40->setObjectName(QString::fromUtf8("label_40"));
        label_40->setFont(font1);

        horizontalLayout_38->addWidget(label_40);


        verticalLayout_14->addLayout(horizontalLayout_38);

        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setSpacing(6);
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_v_signal_2 = new QLabel(verticalLayoutWidget_6);
        label_v_signal_2->setObjectName(QString::fromUtf8("label_v_signal_2"));
        label_v_signal_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_39->addWidget(label_v_signal_2);

        label_41 = new QLabel(verticalLayoutWidget_6);
        label_41->setObjectName(QString::fromUtf8("label_41"));
        label_41->setFont(font1);

        horizontalLayout_39->addWidget(label_41);


        verticalLayout_14->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setSpacing(6);
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_v_signal_posSen_2 = new QLabel(verticalLayoutWidget_6);
        label_v_signal_posSen_2->setObjectName(QString::fromUtf8("label_v_signal_posSen_2"));
        label_v_signal_posSen_2->setStyleSheet(QString::fromUtf8("min-width:     30px;    \n"
"min-height:    30px;    \n"
"max-width:     30px;   \n"
"max-height:    30px;   \n"
"border-radius: 16px;      \n"
"background-color: rgb(175, 176, 179);\n"
"border-style: solid;\n"
"border-width: 2px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_40->addWidget(label_v_signal_posSen_2);

        label_42 = new QLabel(verticalLayoutWidget_6);
        label_42->setObjectName(QString::fromUtf8("label_42"));
        label_42->setFont(font1);

        horizontalLayout_40->addWidget(label_42);


        verticalLayout_14->addLayout(horizontalLayout_40);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(190, 57, 131, 21));
        horizontalLayout_14 = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        horizontalLayout_14->setContentsMargins(0, 0, 0, 0);
        label_43 = new QLabel(horizontalLayoutWidget);
        label_43->setObjectName(QString::fromUtf8("label_43"));
        label_43->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_14->addWidget(label_43);

        horizontalLayoutWidget_5 = new QWidget(centralWidget);
        horizontalLayoutWidget_5->setObjectName(QString::fromUtf8("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(220, 7, 199, 26));
        horizontalLayout_41 = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout_41->setSpacing(6);
        horizontalLayout_41->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_41->setObjectName(QString::fromUtf8("horizontalLayout_41"));
        horizontalLayout_41->setContentsMargins(0, 0, 0, 0);
        label_44 = new QLabel(horizontalLayoutWidget_5);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_41->addWidget(label_44);

        comboBox_devices_2 = new QComboBox(horizontalLayoutWidget_5);
        comboBox_devices_2->setObjectName(QString::fromUtf8("comboBox_devices_2"));

        horizontalLayout_41->addWidget(comboBox_devices_2);

        btn_connect_daq_2 = new QPushButton(horizontalLayoutWidget_5);
        btn_connect_daq_2->setObjectName(QString::fromUtf8("btn_connect_daq_2"));

        horizontalLayout_41->addWidget(btn_connect_daq_2);

        label_is_connected_2 = new QLabel(horizontalLayoutWidget_5);
        label_is_connected_2->setObjectName(QString::fromUtf8("label_is_connected_2"));
        label_is_connected_2->setStyleSheet(QString::fromUtf8("min-width:     14px;    \n"
"min-height:    14px;    \n"
"max-width:     14px;   \n"
"max-height:    14px;   \n"
"border-radius: 8px;      \n"
"background-color: rgb(234, 70, 48);\n"
"border-style: solid;\n"
"border-width: 1px;\n"
"border-color: rgb(131, 132, 135);"));

        horizontalLayout_41->addWidget(label_is_connected_2);

        verticalLayoutWidget_4 = new QWidget(centralWidget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(20, 337, 61, 41));
        verticalLayout_15 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        label_45 = new QLabel(verticalLayoutWidget_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        verticalLayout_15->addWidget(label_45);

        lineEdit_count_2 = new QLineEdit(verticalLayoutWidget_4);
        lineEdit_count_2->setObjectName(QString::fromUtf8("lineEdit_count_2"));

        verticalLayout_15->addWidget(lineEdit_count_2);

        btn_start = new QPushButton(centralWidget);
        btn_start->setObjectName(QString::fromUtf8("btn_start"));
        btn_start->setGeometry(QRect(100, 337, 51, 21));
        btn_dio_start = new QPushButton(centralWidget);
        btn_dio_start->setObjectName(QString::fromUtf8("btn_dio_start"));
        btn_dio_start->setGeometry(QRect(770, 87, 71, 31));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(20, 227, 131, 41));
        verticalLayout_16 = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        label_46 = new QLabel(verticalLayoutWidget);
        label_46->setObjectName(QString::fromUtf8("label_46"));

        verticalLayout_16->addWidget(label_46);

        comboBox_chan_mode_2 = new QComboBox(verticalLayoutWidget);
        comboBox_chan_mode_2->addItem(QString());
        comboBox_chan_mode_2->addItem(QString());
        comboBox_chan_mode_2->addItem(QString());
        comboBox_chan_mode_2->setObjectName(QString::fromUtf8("comboBox_chan_mode_2"));

        verticalLayout_16->addWidget(comboBox_chan_mode_2);

        btn_stop = new QPushButton(centralWidget);
        btn_stop->setObjectName(QString::fromUtf8("btn_stop"));
        btn_stop->setGeometry(QRect(100, 357, 51, 21));
        btn_start_2 = new QPushButton(centralWidget);
        btn_start_2->setObjectName(QString::fromUtf8("btn_start_2"));
        btn_start_2->setEnabled(false);
        btn_start_2->setGeometry(QRect(450, 10, 56, 21));
        btn_start_2->setCheckable(false);
        btn_start_2->setChecked(false);
        DAQ_GUI_QTClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(DAQ_GUI_QTClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DAQ_GUI_QTClass->setStatusBar(statusBar);
        menuBar = new QMenuBar(DAQ_GUI_QTClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1036, 18));
        menu = new QMenu(menuBar);
        menu->setObjectName(QString::fromUtf8("menu"));
        DAQ_GUI_QTClass->setMenuBar(menuBar);

        menuBar->addAction(menu->menuAction());

        retranslateUi(DAQ_GUI_QTClass);

        QMetaObject::connectSlotsByName(DAQ_GUI_QTClass);
    } // setupUi

    void retranslateUi(QMainWindow *DAQ_GUI_QTClass)
    {
        DAQ_GUI_QTClass->setWindowTitle(QApplication::translate("DAQ_GUI_QTClass", "DAQ_GUI_QT", nullptr));
        action->setText(QApplication::translate("DAQ_GUI_QTClass", "\346\226\207\344\273\266\344\277\235\345\255\230\350\267\257\345\276\204", nullptr));
        checkBox_all_2->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\205\250\351\200\211", nullptr));
        label_10->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\200\232\351\201\223\346\263\250\351\207\212", nullptr));
        checkBox_ai_4->setText(QApplication::translate("DAQ_GUI_QTClass", "AI 0", nullptr));
        lineEdit_6->setText(QApplication::translate("DAQ_GUI_QTClass", "\344\270\273\350\275\264\351\230\273\345\241\236\345\210\266\345\212\250\345\231\250", nullptr));
        label_16->setText(QString());
        checkBox_ai_5->setText(QApplication::translate("DAQ_GUI_QTClass", "AI 1", nullptr));
        lineEdit_7->setText(QApplication::translate("DAQ_GUI_QTClass", "\347\224\265\347\243\201\345\210\266\345\212\250\345\231\250\357\274\210\350\247\243\351\224\201\357\274\211", nullptr));
        label_18->setText(QString());
        checkBox_ai_6->setText(QApplication::translate("DAQ_GUI_QTClass", "AI 2", nullptr));
        lineEdit_17->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\251\261\345\212\250\347\224\265\346\234\272\344\277\241\345\217\267", nullptr));
        label_28->setText(QString());
        checkBox_ai_7->setText(QApplication::translate("DAQ_GUI_QTClass", "AI 3", nullptr));
        lineEdit_2->setText(QApplication::translate("DAQ_GUI_QTClass", "\344\275\215\347\275\256\344\274\240\346\204\237\345\231\250\351\200\232\351\201\223A/B", nullptr));
        label_11->setText(QString());
        btn_dio_stop->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\201\234\346\255\242", nullptr));
        label_29->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\207\207\346\240\267\347\216\207(Sps/s):", nullptr));
        lineEdit_sample_rate_2->setText(QApplication::translate("DAQ_GUI_QTClass", "4000", nullptr));
        label_30->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\274\200\351\227\250\346\227\266\351\227\264\357\274\232", nullptr));
        label_time_open_door_2->setText(QString());
        label_31->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\205\263\351\227\250\346\227\266\351\227\264\357\274\232", nullptr));
        label_time_close_door_3->setText(QString());
        label_32->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\275\223\345\211\215\346\227\266\351\227\264\357\274\232", nullptr));
        label_current_time_2->setText(QString());
        label_33->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\207\217\347\250\213:", nullptr));
        comboBox_range_2->setItemText(0, QApplication::translate("DAQ_GUI_QTClass", "-5~5V", nullptr));
        comboBox_range_2->setItemText(1, QApplication::translate("DAQ_GUI_QTClass", "0~10V", nullptr));

        label_34->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\275\223\345\211\215\350\277\236\346\216\245\345\210\260\347\224\265\350\204\221\347\232\204\351\207\207\351\233\206\345\215\241\346\225\260\351\207\217\357\274\232", nullptr));
        label_daq_count_2->setText(QApplication::translate("DAQ_GUI_QTClass", "<html><head/><body><p>0</p></body></html>", nullptr));
        btn_refresh_2->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\210\267\346\226\260", nullptr));
        label_enable_2->setText(QString());
        label_35->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\233\266\351\200\237\344\277\241\345\217\267", nullptr));
        label_open_2->setText(QString());
        label_36->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\233\206\346\216\247\345\274\200\351\227\250", nullptr));
        label_close_2->setText(QString());
        label_37->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\233\206\346\216\247\345\205\263\351\227\250", nullptr));
        label_door_close_3->setText(QString());
        label_38->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\227\250\345\205\263\351\227\2551", nullptr));
        label_door_close_4->setText(QString());
        label_39->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\227\250\345\205\263\351\227\2552", nullptr));
        label_lock_2->setText(QString());
        label_40->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\224\201\345\210\260\344\275\215", nullptr));
        label_v_signal_2->setText(QString());
        label_41->setText(QApplication::translate("DAQ_GUI_QTClass", "\347\224\265\346\272\220\347\224\265\345\216\213", nullptr));
        label_v_signal_posSen_2->setText(QString());
        label_42->setText(QApplication::translate("DAQ_GUI_QTClass", "\344\275\215\347\275\256\344\274\240\346\204\237\345\231\250\347\224\265\346\272\220\347\224\265\345\216\213\344\277\241\345\217\267", nullptr));
        label_43->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\275\223\345\211\215\346\263\242\345\275\242\357\274\232", nullptr));
        label_44->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\207\207\351\233\206\345\215\241ID\357\274\232", nullptr));
        btn_connect_daq_2->setText(QApplication::translate("DAQ_GUI_QTClass", "\346\211\223\345\274\200\351\207\207\351\233\206\345\215\241", nullptr));
        label_is_connected_2->setText(QString());
        label_45->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\207\207\351\233\206\346\254\241\346\225\260:", nullptr));
        lineEdit_count_2->setText(QApplication::translate("DAQ_GUI_QTClass", "0", nullptr));
        btn_start->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\274\200\345\247\213", nullptr));
        btn_dio_start->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\274\200\345\247\213\351\207\207\351\233\206", nullptr));
        label_46->setText(QApplication::translate("DAQ_GUI_QTClass", "\351\200\232\351\201\223\346\250\241\345\274\217:", nullptr));
        comboBox_chan_mode_2->setItemText(0, QApplication::translate("DAQ_GUI_QTClass", "1.DIFF(\345\267\256\345\210\206\346\250\241\345\274\217)", nullptr));
        comboBox_chan_mode_2->setItemText(1, QApplication::translate("DAQ_GUI_QTClass", "2.NRSE(\351\235\236\346\216\245\345\234\260\345\217\202\350\200\203\345\215\225\347\253\257)", nullptr));
        comboBox_chan_mode_2->setItemText(2, QApplication::translate("DAQ_GUI_QTClass", "3.RSE(\346\216\245\345\234\260\345\217\202\350\200\203\345\215\225\347\253\257)", nullptr));

        btn_stop->setText(QApplication::translate("DAQ_GUI_QTClass", "\347\273\223\346\235\237", nullptr));
        btn_start_2->setText(QApplication::translate("DAQ_GUI_QTClass", "\345\274\200\345\247\213", nullptr));
        menu->setTitle(QApplication::translate("DAQ_GUI_QTClass", "\351\200\211\351\241\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DAQ_GUI_QTClass: public Ui_DAQ_GUI_QTClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DAQ_GUI_QT_H
