# Monaco-1
Monaco-1 Polyphonic Analog Modeling Digital Synth

## Features
* 6 Voice Polyphony (6 Notes at once)
* 2 De-tunable Oscillators with variable Waveshape
* Low, Band, and High Pass filter with variable Resonance
* ADSR Envelope per voice
* Low Frequency Oscillator for Amplitude or Filter Modulation
* Selectable Reverb or Delay Effects
* Octave Capacitive Touch Keyboard with Octave select
* Pitch Modulation Slider
* Pseudo-Voice Drone Slider
* Status LEDs for Envelope, LFO, and Output level monitoring

## Codebase
This project was built around a Teensy 3.6 Board running the Teensy Audio System. Most of the code in the Arduino sketch is for managing IO into the synth. The [Teensy Audio System Design Tool](https://www.pjrc.com/teensy/gui/?info=AudioMixer4#) was used to define the signal path for the actual sound engine, whereas the sketch just tweaks the parameters of the signal elements to change the sound.
All Code necessary to implement my build is available in the Teensy Code directory. Note that this was built using version 1.3.0 of the Teensy audio library.

## 3D Models
All files provided here are in the Fusion 360 Archive format, so that they can be opened and tweaked by anyone who wants to use them. The case body components are all listed in the Case Body directory, but each printable part is listed as a seperate body within the archive. 
As this is a first version, I highly recommend modifying the models before attempting a print. If anyone would like my suggestsions for future versions, feel free to contact me.

## Contact
If you do decide to use my project, I would love to see what you do with it! Don't hesitate to contact me if you have any questions.

lellington@smu.edu
