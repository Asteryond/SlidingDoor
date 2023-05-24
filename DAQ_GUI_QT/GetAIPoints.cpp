#include "GetAIPoints.h"
#include <QtCore>
#include <usb-1000.h>

#include "xlsxdocument.h"
#include "xlsxchartsheet.h"
#include "xlsxcellrange.h"
#include "xlsxchart.h"
#include "xlsxrichstring.h"
#include "xlsxworkbook.h"

void GetAIPoints::run()
{
	qDebug() << "thread run";
    qDebug("设备ID： %d, 通道:%d, 每通道采样点数: %d, 超时时间: %d, 通道数：%d",deviceIndex , chSel, num, timeOut, chanCount);
    float* data = new float[num * chanCount];
    int resCode = 0;
    //int ptsPerChan = num / chanCount;
   
    resCode = SetChanMode(deviceIndex, chanMode);
    resCode = SetUSB1AiRange(deviceIndex, range);
    resCode = SetSampleRate(deviceIndex, samplerate *chanCount);
    resCode = SetChanSel(deviceIndex, chSel);
    resCode = StartRead(deviceIndex);
    resCode = SetSoftTrig(deviceIndex, 1);


    if (resCode)
    {
        qDebug() << "set error: " << resCode;
        return;
    }


    //while (!isInterruptionRequested())
    {
        resCode = GetAiChans(deviceIndex, num, chSel, data, timeOut);
        if (resCode >= 0)
        {
            //保存数据到excel
            int chanSel = chSel;
            QXlsx::Document xlsx;
            QDateTime currentTime = QDateTime::currentDateTime();
            QString current = currentTime.toString("MM-dd-hh-mm-ss");
            for (int i = 0, col = 1; i < 16; i++)
            {
                if (chanSel & 1)
                {
                    xlsx.write(1, col, QString("AI") + QString::number(i));
                    col++;
                }
                chanSel = chanSel >> 1;
            }

            for (int i = 0; i < num; i++)
            {
                for (int j = 0; j < chanCount; j++)
                {
                    xlsx.write(i + 2, j + 1, data[j * num + i]);
                    
                }
            }

            xlsx.saveAs(current + ".xlsx");
            emit done(resCode, data, num, chanCount);
        }
        else
        {
            
            qDebug() << "getAiChans() error: " << resCode;
        }
    }


	qDebug() << "done";
	
}