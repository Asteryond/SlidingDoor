#pragma once
#pragma execution_character_set("utf-8")
#include <QThread>

class GetAIPoints :
    public QThread
{
    Q_OBJECT
protected:
    void run();
private:
    int deviceIndex;
    //总共采样点数
    ulong num;
    ushort chSel;
    long timeOut;
    //通道数
    int chanCount;

    uchar chanMode;
    float range;
    uint samplerate;
   // int chanSel[16];

public:
    void setDeviceIndex(int deviceIndex) { this->deviceIndex = deviceIndex; }
    void setNum(ulong num) { this->num = num; }
    void setChanSel(ushort chSel) { this->chSel = chSel; }
    void setTimeOut(long timeOut) { this->timeOut = timeOut; }
    void setChanCount(int count) { this->chanCount = count; }
    void setChanMode(uchar chanMode) { this->chanMode = chanMode; }
    void setRange(float range) { this->range = range; }
    void setSampleRate(uint sampleRate) { this->samplerate = sampleRate; }
signals:
    void done(int resCode,float* points, int size, int chanCount);
    
};

