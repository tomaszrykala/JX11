/*
  ==============================================================================

    NoiseGenerator.h
    Created: 8 Jan 2024 9:01:27pm
    Author:  Tomasz Rykala

  ==============================================================================
*/

#pragma once

class NoiseGenerator
{
    
public:
    void reset()
    {
        noiseSeed = 22222;
    }
    
    float nextValue()
    {
        // Generate the next noise pseudorandom number.
        noiseSeed = noiseSeed * 196314165 + 907633515;
        
        // Convert to a signed value.
        int temp = int(noiseSeed >> 7) - 16777216;
        
        // Convert to a floating-point number between -1.0 and 1.0.
        return float(temp) / 16777216.0f;
    }

private:
    unsigned int noiseSeed;
};
