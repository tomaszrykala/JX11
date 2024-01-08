/*
  ==============================================================================

    Voice.h
    Created: 7 Jan 2024 11:07:22pm
    Author:  Tomasz Rykala

  ==============================================================================
*/

#pragma once
#include "Oscillator.h"

struct Voice
{
    int note;
    Oscillator osc;
    
    void reset()
    {
        note = 0;
        osc.reset();
    }
    
    float render()
    {
        return osc.nextSample();
    }
};
