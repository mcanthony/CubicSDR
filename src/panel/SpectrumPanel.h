#pragma once

#include "GLPanel.h"

class SpectrumPanel : public GLPanel {
public:
    SpectrumPanel();
    
    void setPoints(std::vector<float> &points);
    
    float getFloorValue();
    void setFloorValue(float floorValue);

    float getCeilValue();
    void setCeilValue(float ceilValue);
    
    void setFreq(long long freq);
    long long getFreq();
    
    void setBandwidth(long long bandwidth);
    long long getBandwidth();

    void setFFTSize(int fftSize_in);
    int getFFTSize();

    void setShowDb(bool showDb);
    bool getShowDb();
    
protected:
    void drawPanelContents();

private:
    float floorValue, ceilValue;
    int fftSize;
    long long freq;
    long long bandwidth;
    std::vector<float> points;
    
    GLTextPanel dbPanelCeil;
    GLTextPanel dbPanelFloor;
    bool showDb;
};