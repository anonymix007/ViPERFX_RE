#pragma once

#include <cstdint>
#include "../utils/Harmonic.h"
#include "../utils/MultiBiquad.h"

class SpectrumExtend {
public:
    SpectrumExtend();
    ~SpectrumExtend();

    void Process(float *samples, uint32_t size);
    void Reset();
    void SetEnable(bool enable);
    void SetExciter(float value);
    void SetReferenceFrequency(uint32_t freq);
    void SetSamplingRate(uint32_t samplingRate);

    MultiBiquad highpass[2];
    MultiBiquad lowpass[2];
    Harmonic harmonics[2];
    bool enabled;
    uint32_t samplingRate;
    uint32_t referenceFreq;
    float exciter;
};


