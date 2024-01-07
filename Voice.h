/*
  ==============================================================================

    Voice.h
    Created: 7 Jan 2024 11:07:22pm
    Author:  Tomasz Rykala

  ==============================================================================
*/

#pragma once

struct Voice
{
    int note;
    int velocity;
    
    void reset()
    {
        note = 0;
        velocity = 0;
    }
};
