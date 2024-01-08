/*
  ==============================================================================

    Oscillator.h
    Created: 8 Jan 2024 11:14:08pm
    Author:  Tomasz Rykala

  ==============================================================================
*/

#pragma once

const float TWO_PI = juce::MathConstants<float>::twoPi;

class Oscillator
{
public:
    float amplitude;
    float freq;
    float sampleRate;
    float phaseOffset;
    int sampleIndex;
    
    void reset()
    {
        sampleIndex = 0;
    }
    
    float nextSample()
    {
        float output = amplitude * std::sin(TWO_PI * sampleIndex * freq / sampleRate + phaseOffset);
        
        sampleIndex += 1;
        return output;
    }
};
