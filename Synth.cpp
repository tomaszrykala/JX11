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
    voice.reset();
}

void Synth::render(float **outputBuffers, int sampleCount)
{
    // do nothing
}

void Synth::midiMessage(uint8_t data0, uint8_t data1, uint8_t data2)
{
    switch (data0) {
        case 0x80:
            noteOff(data1 & 0x7F);
            break;
        
        case 0x90:
            uint8_t note = data1 & 0x7F;
            uint8_t velo = data2 & 0x7F;
            if (velo > 0) {
                noteOn(note, velo);
            } else {
                noteOff(note);
            }
            break;
            
        default:
            break;
    }
}

void Synth::noteOn(int note, int velocity)
{
    voice.note = note;
    voice.velocity = velocity;
}

void Synth::noteOff(int note)
{
    if (voice.note == note) {
        voice.note = 0;
        voice.velocity = 0;
    }
}
