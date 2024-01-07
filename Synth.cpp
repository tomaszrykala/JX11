/*
  ==============================================================================

    Synth.cpp
    Created: 7 Jan 2024 11:07:13pm
    Author:  Tomasz Rykala

  ==============================================================================
*/

#include "Synth.h"

Synth::Synth()
{
    sampleRate = 44100.0f;
}

void Synth::allocateResources(double sampleRate_, int samplesPerBlock)
{
    sampleRate = static_cast<float>(sampleRate_);
}

void Synth::deallocateResources()
{
    // do nothing
}

void Synth::reset()
{
    // do nothing
}

void Synth::render(float **outputBuffers, int sampleCount)
{
    // do nothing
}

void Synth::midiMessage(uint8_t data0, uint8_t data1, uint8_t data2)
{
    // do nothing
}
