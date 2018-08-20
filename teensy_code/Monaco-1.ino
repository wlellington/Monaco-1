#include <Audio.h>
#include <Wire.h>
#include <SPI.h>
#include <SD.h>
#include <SerialFlash.h>
#include "tables.h"

#include <MIDI.h>


// GUItool: begin automatically generated code
AudioSynthWaveform       waveform17;     //xy=68,1012
AudioSynthWaveform       waveform16;     //xy=69,973
AudioSynthWaveform       waveform7;      //xy=73,445
AudioSynthWaveform       waveform8;      //xy=74,482
AudioSynthWaveform       waveform4;      //xy=75,254
AudioSynthWaveform       waveform3;      //xy=76,219
AudioSynthWaveform       waveform13;     //xy=75,799
AudioSynthWaveform       waveform9;      //xy=76,582
AudioSynthWaveformDc     dc1;            //xy=76,629
AudioSynthWaveform       waveform10;     //xy=76,688
AudioSynthWaveform       waveform11;     //xy=76,723
AudioSynthWaveform       waveform5;      //xy=78,332
AudioSynthWaveform       waveform6;      //xy=78,367
AudioSynthWaveform       waveform1;      //xy=79,119
AudioSynthWaveform       waveform2;      //xy=79,155
AudioSynthWaveform       waveform12;     //xy=77,764
AudioSynthWaveform       waveform15;     //xy=144,930
AudioEffectDigitalCombine combine1;       //xy=215,981
AudioMixer4              mixer4;         //xy=229,465
AudioMixer4              mixer12;        //xy=229,707
AudioMixer4              mixer2;         //xy=231,239
AudioMixer4              mixer11;        //xy=229,783
AudioMixer4              mixer3;         //xy=231,352
AudioMixer4              mixer5;         //xy=230,602
AudioMixer4              mixer1;         //xy=233,139
AudioAmplifier           amp3;           //xy=246,535
AudioMixer4              mixer17;        //xy=363,980
AudioSynthWaveform       waveform14;     //xy=388,604
AudioSynthWaveformDc     dc3;            //xy=401,660
AudioEffectMultiply      multiply3;      //xy=408,358
AudioEffectMultiply      multiply1;      //xy=411,145
AudioEffectMultiply      multiply4;      //xy=410,471
AudioEffectEnvelope      envelope3;      //xy=411,407
AudioEffectMultiply      multiply2;      //xy=412,246
AudioEffectEnvelope      envelope1;      //xy=413,196
AudioEffectMultiply      multiply5;      //xy=413,713
AudioEffectEnvelope      envelope2;      //xy=416,299
AudioEffectEnvelope      envelope6;      //xy=414,826
AudioEffectEnvelope      envelope5;      //xy=415,748
AudioEffectEnvelope      envelope4;      //xy=416,516
AudioEffectMultiply      multiply6;      //xy=415,789
AudioMixer4              mixer16;        //xy=529,630
AudioEffectMultiply      multiply7;      //xy=530,970
AudioEffectEnvelope      envelope8;      //xy=536,1015
AudioMixer4              mixer13;        //xy=562,754
AudioMixer4              mixer6;         //xy=573,496
AudioMixer4              mixer14;        //xy=580,309
AudioAmplifier           amp2;           //xy=652,630
AudioAmplifier           amp1;           //xy=661,204
AudioEffectDelay         delay1;         //xy=727,372
AudioAmplifier           amp4;           //xy=766,482
AudioFilterStateVariable filter1;        //xy=788,247
AudioMixer4              mixer15;        //xy=787,578
AudioSynthWaveformDc     dc2;            //xy=795,653
AudioEffectEnvelope      envelope7;      //xy=797,701
AudioMixer4              mixer9;         //xy=874,403
AudioMixer4              mixer8;         //xy=875,339
AudioEffectFreeverb      freeverb1;      //xy=917,482
AudioMixer4              mixer7;         //xy=927,253
AudioRecordQueue         queue1;         //xy=948,578
AudioRecordQueue         queue2;         //xy=955,666
AudioMixer4              mixer10;        //xy=1089,377
AudioAnalyzePeak         peak1;          //xy=1241,389
AudioOutputI2S           i2s1;           //xy=1279,239
AudioConnection          patchCord1(waveform17, 0, combine1, 1);
AudioConnection          patchCord2(waveform16, 0, combine1, 0);
AudioConnection          patchCord3(waveform7, 0, mixer4, 0);
AudioConnection          patchCord4(waveform8, 0, mixer4, 1);
AudioConnection          patchCord5(waveform4, 0, mixer2, 1);
AudioConnection          patchCord6(waveform3, 0, mixer2, 0);
AudioConnection          patchCord7(waveform13, 0, mixer11, 1);
AudioConnection          patchCord8(waveform9, 0, mixer5, 0);
AudioConnection          patchCord9(dc1, 0, mixer5, 1);
AudioConnection          patchCord10(waveform10, 0, mixer12, 0);
AudioConnection          patchCord11(waveform11, 0, mixer12, 1);
AudioConnection          patchCord12(waveform5, 0, mixer3, 0);
AudioConnection          patchCord13(waveform6, 0, mixer3, 1);
AudioConnection          patchCord14(waveform1, 0, mixer1, 0);
AudioConnection          patchCord15(waveform2, 0, mixer1, 1);
AudioConnection          patchCord16(waveform12, 0, mixer11, 0);
AudioConnection          patchCord17(waveform15, 0, mixer17, 0);
AudioConnection          patchCord18(combine1, 0, mixer17, 1);
AudioConnection          patchCord19(mixer4, 0, multiply4, 0);
AudioConnection          patchCord20(mixer12, 0, multiply5, 0);
AudioConnection          patchCord21(mixer2, 0, multiply2, 0);
AudioConnection          patchCord22(mixer11, 0, multiply6, 0);
AudioConnection          patchCord23(mixer3, 0, multiply3, 0);
AudioConnection          patchCord24(mixer5, amp3);
AudioConnection          patchCord25(mixer1, 0, multiply1, 0);
AudioConnection          patchCord26(amp3, 0, multiply4, 1);
AudioConnection          patchCord27(amp3, 0, multiply3, 1);
AudioConnection          patchCord28(amp3, 0, multiply2, 1);
AudioConnection          patchCord29(amp3, 0, multiply1, 1);
AudioConnection          patchCord30(amp3, 0, multiply5, 1);
AudioConnection          patchCord31(amp3, 0, multiply6, 1);
AudioConnection          patchCord32(amp3, 0, mixer15, 0);
AudioConnection          patchCord33(amp3, 0, multiply7, 1);
AudioConnection          patchCord34(mixer17, 0, multiply7, 0);
AudioConnection          patchCord35(waveform14, 0, mixer16, 0);
AudioConnection          patchCord36(dc3, 0, mixer16, 1);
AudioConnection          patchCord37(multiply3, envelope3);
AudioConnection          patchCord38(multiply1, envelope1);
AudioConnection          patchCord39(multiply4, envelope4);
AudioConnection          patchCord40(envelope3, 0, mixer6, 2);
AudioConnection          patchCord41(multiply2, envelope2);
AudioConnection          patchCord42(envelope1, 0, mixer6, 0);
AudioConnection          patchCord43(multiply5, envelope5);
AudioConnection          patchCord44(envelope2, 0, mixer6, 1);
AudioConnection          patchCord45(envelope6, 0, mixer13, 1);
AudioConnection          patchCord46(envelope5, 0, mixer13, 0);
AudioConnection          patchCord47(envelope4, 0, mixer6, 3);
AudioConnection          patchCord48(multiply6, envelope6);
AudioConnection          patchCord49(mixer16, amp2);
AudioConnection          patchCord50(multiply7, envelope8);
AudioConnection          patchCord51(envelope8, 0, mixer14, 2);
AudioConnection          patchCord52(mixer13, 0, mixer14, 1);
AudioConnection          patchCord53(mixer6, 0, mixer14, 0);
AudioConnection          patchCord54(mixer14, amp1);
AudioConnection          patchCord55(amp2, 0, mixer15, 1);
AudioConnection          patchCord56(amp2, 0, filter1, 1);
AudioConnection          patchCord57(amp1, 0, filter1, 0);
AudioConnection          patchCord58(delay1, 0, mixer8, 0);
AudioConnection          patchCord59(delay1, 1, mixer8, 1);
AudioConnection          patchCord60(delay1, 2, mixer8, 2);
AudioConnection          patchCord61(delay1, 3, mixer8, 3);
AudioConnection          patchCord62(delay1, 4, mixer9, 0);
AudioConnection          patchCord63(delay1, 5, mixer9, 1);
AudioConnection          patchCord64(delay1, 6, mixer9, 2);
AudioConnection          patchCord65(delay1, 7, mixer9, 3);
AudioConnection          patchCord66(amp4, freeverb1);
AudioConnection          patchCord67(filter1, 0, mixer7, 0);
AudioConnection          patchCord68(filter1, 1, mixer7, 1);
AudioConnection          patchCord69(filter1, 2, mixer7, 2);
AudioConnection          patchCord70(mixer15, queue1);
AudioConnection          patchCord71(dc2, envelope7);
AudioConnection          patchCord72(envelope7, queue2);
AudioConnection          patchCord73(mixer9, 0, mixer10, 1);
AudioConnection          patchCord74(mixer8, 0, mixer10, 0);
AudioConnection          patchCord75(freeverb1, 0, mixer10, 3);
AudioConnection          patchCord76(mixer7, delay1);
AudioConnection          patchCord77(mixer7, 0, mixer10, 2);
AudioConnection          patchCord78(mixer7, amp4);
AudioConnection          patchCord79(mixer10, 0, i2s1, 1);
AudioConnection          patchCord80(mixer10, 0, i2s1, 0);
AudioConnection          patchCord81(mixer10, peak1);
AudioControlSGTL5000     sgtl5000_1;     //xy=806,155
// GUItool: end automatically generated code

// Pin Definitions
#define LFO_LED 37
#define ENV_LED 36
#define USAGE_LED 35
#define OCTAVE_UP_LED 29
#define OCTAVE_DOWN_LED 30

#define MOD_SWITCH 27
#define SWITCH 28

#define SOFT_POT_1 38
#define SOFT_POT_2 39

// Knob holding array
int knobs[16];
int knobs_old[16];

// Key holding array
int keys[14];
int keys_old[14];

// Threshold for touch detection
int touch_threshold = 5500;

// Thresholds for dynamic touch config
int touch_thresholds[14] = {0};
int touch_max_thresholds[14] = {0};

// Pin for touch input
int touch_read_pin = 16; 

// Analog pin
int knob_pin = A3;

// Pins for mux control
int select_pins[4] = {0,1,2,3};

// Octave for keyboard map
int octave = 3;

// Flip mappings for pots wired backward
uint8_t invert_adc[16] = {0, 1, 1, 1, 
                          0, 1, 1, 1,
                          0, 0, 0, 0, 
                          0, 1, 1, 1};

// Reording for knobs for mapping to linear sequence
uint8_t knob_map[16] = {0, 8, 13, 5,
                        4, 12, 1, 9,
                        2, 10, 6, 14,
                        3, 11, 7, 15};

// Valid ranges for params set by knobs, where applicable
float valid_ranges[16 * 2] = {0,0, // Osc1 Shapes (discrete)
                            0,0, // Osc2 Shapes (discrete)
                            0,0, // Mod Shape (discrete)
                            0,0, // Filter Type (discrete)
                            1.0 , 2.0, // Osc1 Tuning
                            0.5, 1.0, // Osc2 Tuning
                            0.01, 20.0, // Mod Rate
                            0.0, 18000.0, // Filter Freq
                            0.0, 3000.0, // Attack
                            0.0, 3000.0, // Decay
                            0.0, 1.0, // Sustain
                            0.0 ,3000.0, // Release
                            1.1, 5.0, // Filter Resonance
                            0.3, 1.0, // Volume
                            0.0, 40, // Delay max time?
                            1.0, 8.0}; // Delay Taps
                            

// Pitch altering for voice oscillator pitches
double voice_multipliers[2] = {1.0, 1.0};
double pitch_mod_multipliers[2] = {0.890909091, 1.12272727};

// Notes currently active in voices
int active_notes[6] = {0, 0, 0, 0, 0, 0};

// Drone Activity
int drone_status = 0;

// Function for mapping values to float range
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
 return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}

// Returns waveform shape based on knob position
int map_waveform(int knob, int knob_type){
  // Voice Oscilators
  if(knob_type == 0){
    if(knob < 200){
      return WAVEFORM_TRIANGLE;
    }
    else if(knob < 400){
      return WAVEFORM_SAWTOOTH;
    }
    else if(knob < 600){
      return WAVEFORM_SAWTOOTH_REVERSE;
    }
    else if(knob < 800){
      return WAVEFORM_SQUARE;
    }
    else{
      return WAVEFORM_PULSE;
    }
  }
  
  // Modulator Oscilator
  else if(knob_type == 1){
    if(knob < 170){
      return WAVEFORM_SINE;
    }
    if(knob < 340){
      return WAVEFORM_SAWTOOTH;
    }
    else if(knob < 510){
      return WAVEFORM_TRIANGLE;
    }
    else if(knob < 680){
      return WAVEFORM_SAWTOOTH_REVERSE;
    }
    else if(knob < 850){
      return WAVEFORM_SQUARE;
    }
    else if(knob < 1000){
      return WAVEFORM_PULSE;
    }
    else{
      return WAVEFORM_SAMPLE_HOLD;
    }
  }
  return 0;
}

// Midi Support functions
void myNoteOn(byte channel, byte note, byte velocity) {
  // Throw out keys out of range
  if(note < 36 || note > 95){
    return;
  }

  // Calculate note frequency
  double note_freq = note_to_freq(note);

  // Apply to first inactive voice
  if(!envelope1.isActive() || active_notes[0] == note){
    waveform1.frequency(note_freq * voice_multipliers[0]);
    waveform2.frequency(note_freq * voice_multipliers[1]);
    envelope1.noteOn();
    envelope7.noteOn(); // Light env
    active_notes[0] = note;
    
    // Set LFO phase, not sure if this works
    waveform9.phase(0.0);
    waveform14.phase(0.0);    
  }
  else if(!envelope2.isActive() || active_notes[1] == note){
    waveform3.frequency(note_freq * voice_multipliers[0]);
    waveform4.frequency(note_freq * voice_multipliers[1]);
    envelope2.noteOn();
    active_notes[1] = note;
  }
  else if(!envelope3.isActive() || active_notes[2] == note){
    waveform5.frequency(note_freq * voice_multipliers[0]);
    waveform6.frequency(note_freq * voice_multipliers[1]);
    envelope3.noteOn();
    active_notes[2] = note;
  }
  else if(!envelope4.isActive() || active_notes[3] == note){
    waveform7.frequency(note_freq * voice_multipliers[0]);
    waveform8.frequency(note_freq * voice_multipliers[1]);
    envelope4.noteOn();
    active_notes[3] = note;
  }
  else if(!envelope5.isActive() || active_notes[4] == note){
    waveform10.frequency(note_freq * voice_multipliers[0]);
    waveform11.frequency(note_freq * voice_multipliers[1]);
    envelope5.noteOn();
    active_notes[4] = note;
  }
  // Override voice 6 if necessary
  else{
    waveform12.frequency(note_freq * voice_multipliers[0]);
    waveform13.frequency(note_freq * voice_multipliers[1]);
    envelope6.noteOn();
    active_notes[5] = note;
  }
}

void myNoteOff(byte channel, byte note, byte velocity) {
  // Throw out keys out of range
  if(note < 36 || note > 95){
    return;
  }

  // Begin note Ending phase (RELEASE)
  if(note == active_notes[0]){
    envelope1.noteOff();
    envelope7.noteOff();
  }
  else if(note == active_notes[1]){
    envelope2.noteOff();
  }
  else if(note == active_notes[2]){
    envelope3.noteOff();
  }
  else if(note == active_notes[3]){
    envelope4.noteOff();
  }
  else if(note == active_notes[4]){
    envelope5.noteOff();
  }
  else if(note == active_notes[5]){
    envelope6.noteOff();
  }
}

// Change midi CC control values [WIP]
void myControlChange(byte channel, byte control, byte value) {
  return;
}

// Poll knobs
void update_knobs(){
  for(int i = 0; i < 16; i++){
    int pin_num = knob_map[i];
    if(pin_num & (1 << 0)){
      digitalWrite(select_pins[0], HIGH);
    }
    else{
      digitalWrite(select_pins[0], LOW);
    }
    if(pin_num & (1 << 1)){
      digitalWrite(select_pins[1], HIGH);
    }
    else{
      digitalWrite(select_pins[1], LOW);
    }
    if(pin_num & (1 << 2)){
      digitalWrite(select_pins[2], HIGH);
    }
    else{
      digitalWrite(select_pins[2], LOW);
    }
    if(pin_num & (1 << 3)){
      digitalWrite(select_pins[3], HIGH);
    }
    else{
      digitalWrite(select_pins[3], LOW);
    }
    // Read ADC 
    if(invert_adc[i] == 0){
      knobs[i] = analogRead(knob_pin);
    }
    else{
      knobs[i] = 1024 - analogRead(knob_pin);
    }
  }
}

// Display knob values
void print_knobs(){
  for(int i = 0; i < 16; i++){
    Serial.print(knobs[i]);
    Serial.print(" ");
  }
  Serial.println("");
}

// Poll keys
void update_keys(){
  for(int i = 0; i< 14; i++){
    if(i & (1 << 0)){
      digitalWrite(select_pins[0], HIGH);
    }
    else{
      digitalWrite(select_pins[0], LOW);
    }
    
    if(i & (1 << 1)){
      digitalWrite(select_pins[1], HIGH);
    }
    else{
      digitalWrite(select_pins[1], LOW);
    }
    if(i & (1 << 2)){
      digitalWrite(select_pins[2], HIGH);
    }
    else{
      digitalWrite(select_pins[2], LOW);
    }
    if(i & (1 << 3)){
      digitalWrite(select_pins[3], HIGH);
    }
    else{
      digitalWrite(select_pins[3], LOW);
    } 
    //Serial.print(touchRead(touch_read_pin));
    //Serial.print(" ");
    delay(.01);
    int read_value = touchRead(touch_read_pin);
    delay(.01);
    keys[i] = ((read_value > touch_thresholds[i] && read_value < touch_max_thresholds[i] ) ? 1 : 0 );
  }
   //Serial.println("");
}

// Poll keys to set dynamic range for touch detection
void set_touch_thresh(){
  for(int i = 0; i< 14; i++){
    if(i & (1 << 0)){
      digitalWrite(select_pins[0], HIGH);
    }
    else{
      digitalWrite(select_pins[0], LOW);
    }
    
    if(i & (1 << 1)){
      digitalWrite(select_pins[1], HIGH);
    }
    else{
      digitalWrite(select_pins[1], LOW);
    }
    if(i & (1 << 2)){
      digitalWrite(select_pins[2], HIGH);
    }
    else{
      digitalWrite(select_pins[2], LOW);
    }
    if(i & (1 << 3)){
      digitalWrite(select_pins[3], HIGH);
    }
    else{
      digitalWrite(select_pins[3], LOW);
    } 
    delay(1);
    touch_thresholds[i] = (int)( (float) touchRead(touch_read_pin) * 1.5);
    touch_max_thresholds[i] = touch_thresholds[i] * 2;
  }
}

// Convert key to midi note
int key_to_note(int key){
  return (24 + octave * 12 + key);
}

// Convert midi note to frequency based on table
int note_to_freq(int note){
  int index = note - 36;
  return midi_freqs[index];
}

// Updated signal path params
void update_signal_path(){
  // Voice parameters
  voice_multipliers[0] = mapfloat((float)knobs[4], (float)1, (float)1023, valid_ranges[4 * 2], valid_ranges[4 * 2 + 1]);
  voice_multipliers[1] = mapfloat((float)knobs[5], (float)1, (float)1023, valid_ranges[5 * 2], valid_ranges[5 * 2 + 1]);

  // Pitch modulation
  int mod_value = analogRead(SOFT_POT_1);
  Serial.println(mod_value);
  if (mod_value > 30){
    voice_multipliers[0] *= mapfloat(mod_value, (float)1023, (float)1, pitch_mod_multipliers[0] , pitch_mod_multipliers[1]);
    voice_multipliers[1] *= mapfloat(mod_value, (float)1023, (float)1, pitch_mod_multipliers[0], pitch_mod_multipliers[1]);
  }

  // Turn off second oscilator if at max
  if(knobs[1] > 1000){
    voice_multipliers[1] = 0;
  }

  // Oscillator shapes
  int wave1 = map_waveform(knobs[0], 0);
  int wave2 = map_waveform(knobs[1], 0);
  waveform1.begin(wave1);
  waveform2.begin(wave2);
  waveform3.begin(wave1);
  waveform4.begin(wave2);
  waveform5.begin(wave1);
  waveform6.begin(wave2);
  waveform7.begin(wave1);
  waveform8.begin(wave2);
  waveform10.begin(wave1);
  waveform11.begin(wave2);
  waveform12.begin(wave1);
  waveform13.begin(wave2);
  waveform15.begin(wave1);
  waveform16.begin(wave1);
  waveform17.begin(wave2);

  
  // LFOs 
  waveform9.begin(map_waveform(knobs[2], 1));
  waveform9.frequency(mapfloat((double)knobs[6], (double)1, (double)1023, valid_ranges[6 * 2], valid_ranges[6 * 2 + 1]));
  waveform14.begin(map_waveform(knobs[2], 1));
  waveform14.frequency(mapfloat((double)knobs[6], (double)1, (double)1023, valid_ranges[6 * 2], valid_ranges[6 * 2 + 1]));
  
  // Set hold or oscillate mode (disable LFO if on low side of knob range)
  if(knobs[6] > 5){
      mixer5.gain(1, 0.0);
      mixer5.gain(0, 1.0);
      mixer16.gain(1, 0.0);
      mixer16.gain(0, 1.0);
  }
  else{
      mixer5.gain(1, 1.0);
      mixer5.gain(0, 0.0);
      mixer16.gain(1, 1.0);
      mixer16.gain(0, 0.0);
  }

  // Set lfo destination (filter mod or amp mod)
  if(digitalRead(MOD_SWITCH) == 0){
    amp2.gain(0);
    amp3.gain(1.0);
  }
  else{
    filter1.octaveControl(octave + 1);
    amp2.gain(1.0);
    amp3.gain(1.0);
    mixer5.gain(1, 1.0);
    mixer5.gain(0, 0);
  }
  
  // Update envelope parameters
  int attack_t = map(knobs[8], 0, 1023, valid_ranges[8 * 2], valid_ranges[8 * 2 + 1]);
  int decay_t = map(knobs[9], 0, 1023, valid_ranges[9 * 2], valid_ranges[9 * 2 + 1]);
  int sustain_l = map(knobs[10], 0, 1023, valid_ranges[10 * 2], valid_ranges[10 * 2 + 1]);
  int release_t = map(knobs[11], 0, 1023, valid_ranges[11 * 2], valid_ranges[11 * 2 + 1]);
  envelope1.attack(attack_t);
  envelope1.decay(decay_t);
  envelope1.sustain(sustain_l);
  envelope1.release(release_t);
  envelope2.attack(attack_t);
  envelope2.decay(decay_t);
  envelope2.sustain(sustain_l);
  envelope2.release(release_t);
  envelope3.attack(attack_t);
  envelope3.decay(decay_t);
  envelope3.sustain(sustain_l);
  envelope3.release(release_t);
  envelope4.attack(attack_t);
  envelope4.decay(decay_t);
  envelope4.sustain(sustain_l);
  envelope4.release(release_t);
  envelope5.attack(attack_t);
  envelope5.decay(decay_t);
  envelope5.sustain(sustain_l);
  envelope5.release(release_t);
  envelope6.attack(attack_t);
  envelope6.decay(decay_t);
  envelope6.sustain(sustain_l);
  envelope6.release(release_t);
  envelope7.attack(attack_t);
  envelope7.decay(decay_t);
  envelope7.sustain(sustain_l);
  envelope7.release(release_t);
  envelope8.attack(attack_t);
  envelope8.decay(decay_t);
  envelope8.sustain(sustain_l);
  envelope8.release(release_t);
  

  // Multi Voice Compensation amp
  int active_voices = 0;
  if(envelope1.isActive()){
    active_voices++;
  }
  if(envelope2.isActive()){
    active_voices++;
  }
  if(envelope3.isActive()){
    active_voices++;
  }
  if(envelope4.isActive()){
    active_voices++;
  }
  if(envelope5.isActive()){
    active_voices++;
  }
  if(envelope6.isActive()){
    active_voices++;
  }
  amp1.gain(0.8 - (float)active_voices / 30.0);

  // Filter 
  filter1.frequency(mapfloat(knobs[7], 0, 1023, valid_ranges[7 * 2], valid_ranges[7 * 2 + 1]));
  filter1.resonance(mapfloat(knobs[12], 0, 1023, valid_ranges[12 * 2], valid_ranges[12 * 2 + 1]));

  // Filter output select
  if(knobs[3] < 350){ // Lowpass
    mixer7.gain(0, 1.0);
    mixer7.gain(1, 0);
    mixer7.gain(2, 0);
  }
  else if(knobs[3] < 650){ // Bandpass
    mixer7.gain(0, 0);
    mixer7.gain(1, 1.0);
    mixer7.gain(2, 0);
  }
  else{ // Highpass
    mixer7.gain(0, 0);
    mixer7.gain(1, 0);
    mixer7.gain(2, 1.0);
  }

  // Delay config
  int num_taps = map(knobs[15], 0, 1023, valid_ranges[15*2], valid_ranges[15*2 + 1]);
  int max_delay = (int) map(knobs[14], 0, 1023, valid_ranges[14*2], valid_ranges[14*2 + 1]) * 80 ;
  int delay_distance = max_delay / num_taps;

  // Set delayless tap (no delay)
  mixer8.gain(0, 0.85);
  delay1.delay(0, 0);

  // Enable extra taps
  if(num_taps > 1){
    delay1.delay(1, delay_distance * 1 );
    mixer8.gain(1, 1.0 / 1.5);
  }
  else{
    delay1.disable(1);
    mixer8.gain(1, 0);
  }
  if(num_taps > 2){
    delay1.delay(2, delay_distance * 2);
    mixer8.gain(2, 1.0 / 2.0);
  }
  else{
    delay1.disable(2);
    mixer8.gain(2, 0);
  }
  if(num_taps > 3){
    delay1.delay(3, delay_distance *3 );
    mixer8.gain(3, 1.0 / 4.0);
  }
  else{
    delay1.disable(3);
    mixer8.gain(3, 0);
  }
  if(num_taps > 4){
    delay1.delay(4, delay_distance *4 );
    mixer9.gain(0, 1.0 / 6.0);
  }
  else{
    delay1.disable(4);
    mixer9.gain(0, 0);
  }
  if(num_taps > 5){
    delay1.delay(5, delay_distance *5 );
    mixer9.gain(1, 1.0 / 8.0);
  }
  else{
    delay1.disable(5);
    mixer9.gain(1, 0);
  }
  if(num_taps > 6){
    delay1.delay(6, delay_distance *6 );
    mixer9.gain(2, 1.0 / 10.0);
  }
  else{
    delay1.disable(6);
    mixer9.gain(2, 0);
  }
  if(num_taps > 7){
    delay1.delay(7, delay_distance *7 );
    mixer9.gain(3, 1.0 / 12.0);
  }
  else{
    delay1.disable(7);
    mixer9.gain(3, 0);
  }

  // Configure Reverb
  int reverb_time = map(knobs[14], 0, 1023, 0, 50);
  int wetness = map(knobs[15], 0, 1023, 1, 50) ;
  freeverb1.roomsize((float) reverb_time / 50.0 -0.2);
  freeverb1.damping(0.4);

  // Toggle between Reverb and delay
  if(digitalRead(SWITCH) == 0){ // enable delay, disable reverb
    mixer10.gain(0, 1.0);
    mixer10.gain(1, 1.0);
    mixer10.gain(2, 0.0);
    mixer10.gain(3, 0.0);
  }
  else{ // enable reverb, diable delay
    for(int i = 0; i < 8; i++){ // free ram?
      delay1.disable(i);
    }
    mixer10.gain(0, 0.0);
    mixer10.gain(1, 0.0);
    mixer10.gain(2, 1.0 - ((float) wetness - 10) / 50.0);
    mixer10.gain(3, (float) wetness / 50.0);
    amp4.gain(0.4);
  }

  // Drone Texture compare [WIP]
  combine1.setCombineMode(map(knobs[12], 1, 1023, 0, 3));
  
  // Volume
  sgtl5000_1.volume(mapfloat(knobs[13], 0, 1023, valid_ranges[13 * 2], valid_ranges[13 * 2 + 1]));
}

// Update LEDs for UI
void update_lights(){
  // Update octave indicator 
  if (octave > 3){
    digitalWrite(OCTAVE_UP_LED, HIGH);
  }
  else{
    digitalWrite(OCTAVE_UP_LED, LOW);
  }
  if (octave < 3){
    digitalWrite(OCTAVE_DOWN_LED, HIGH);
  }
  else{
    digitalWrite(OCTAVE_DOWN_LED, LOW);
  }

  // LFO updates
  int lfo_brightness = 0;
  float lfo_amp = 1.0;
  // Determine lfo destination and set mixer gains
  if(digitalRead(MOD_SWITCH) == 0){
    mixer15.gain(0, 1.0);
    mixer15.gain(1, 0);
  }
  else{ // Filter mode
    mixer15.gain(1, 1.0);
    mixer15.gain(0, 0);
    lfo_brightness += 127;
    lfo_amp = 0.5;
  }
  
  // Update LFO light
  if(queue1.available() > 0){
    // Read signal path output buffer
    int16_t buffer[128];
    // REad first byte, calculate brightness from first byte value 
    memcpy(buffer, queue1.readBuffer(), 128);
    lfo_brightness += (((float) buffer[0] * lfo_amp)/ (float) 32767) * 255;
    lfo_brightness = (int)(0.2 * lfo_brightness);
    // Disable if lfo is stopped
    if(knobs[6] < 5){
      lfo_brightness = 0;
    }
    analogWrite(LFO_LED, lfo_brightness);
    queue1.clear();
  }

  // Envelope light, similar process to the lfo light
  int env_brightness = 0;
  if(queue2.available() > 0){
    int16_t buffer[128];
    memcpy(buffer, queue2.readBuffer(), 128);
    env_brightness = (((float) buffer[0])/ (float) 32767) * 255;
    env_brightness = (int)(0.05 * env_brightness);
    analogWrite(ENV_LED, env_brightness);
    queue2.clear();
  }
  else{
    analogWrite(ENV_LED, 0);
  }

  // Output volume light
  int load_brightness = 0;
  if(peak1.available()){
    // Read peak value
    load_brightness = (float) peak1.read() * 255 ;
    load_brightness = (int)(2.0 * load_brightness);
    analogWrite(USAGE_LED, load_brightness);
  }
  else{
    analogWrite(USAGE_LED, 0);
  } 
}

// Update voice oscillators and envelopes
void play_keys(){
  // Disable audio interrupts so all params apply at once
  AudioNoInterrupts();
  for(int i = 0; i < 12; i++){
    // Rising edge detection, turn notes on
    if((keys[i] == 1) && (keys_old[i] == 0)){
      // Translate key press to frequency
      double note_freq = note_to_freq(key_to_note(i));
      int note = key_to_note(i);
      // Assign to first inactive voice
      if(!envelope1.isActive() || active_notes[0] == note){
        waveform1.frequency(note_freq * voice_multipliers[0]);
        waveform2.frequency(note_freq * voice_multipliers[1]);
        envelope1.noteOn();
        envelope7.noteOn(); // Light envelope 
        active_notes[0] = note;
        
        // Set LFO phase, not sure if this works
        waveform9.phase(0.0);
        waveform14.phase(0.0);
        
      }
      else if(!envelope2.isActive() || active_notes[1] == note){
        waveform3.frequency(note_freq * voice_multipliers[0]);
        waveform4.frequency(note_freq * voice_multipliers[1]);
        envelope2.noteOn();
        active_notes[1] = note;
      }
      else if(!envelope3.isActive() || active_notes[2] == note){
        waveform5.frequency(note_freq * voice_multipliers[0]);
        waveform6.frequency(note_freq * voice_multipliers[1]);
        envelope3.noteOn();
        active_notes[2] = note;
      }
      else if(!envelope4.isActive() || active_notes[3] == note){
        waveform7.frequency(note_freq * voice_multipliers[0]);
        waveform8.frequency(note_freq * voice_multipliers[1]);
        envelope4.noteOn();
        active_notes[3] = note;
      }
      else if(!envelope5.isActive() || active_notes[4] == note){
        waveform10.frequency(note_freq * voice_multipliers[0]);
        waveform11.frequency(note_freq * voice_multipliers[1]);
        envelope5.noteOn();
        active_notes[4] = note;
      }
      // Override voice 6 if necessary
      else{
        waveform12.frequency(note_freq * voice_multipliers[0]);
        waveform13.frequency(note_freq * voice_multipliers[1]);
        envelope6.noteOn();
        active_notes[5] = note;
      }
    }
    
    // Key released, begin ending, trigger decay 
    else if((keys[i] == 0) && (keys_old[i] == 1)){
      int curr_note = key_to_note(i);
      if(curr_note == active_notes[0]){
        envelope1.noteOff();
        envelope7.noteOff();
      }
      else if(curr_note == active_notes[1]){
        envelope2.noteOff();
      }
      else if(curr_note == active_notes[2]){
        envelope3.noteOff();
      }
      else if(curr_note == active_notes[3]){
        envelope4.noteOff();
      }
      else if(curr_note == active_notes[4]){
        envelope5.noteOff();
      }
      else if(curr_note == active_notes[5]){
        envelope6.noteOff();
      }
      
    }
    
    // Key is held, continue notes
    else{
      double note_freq = note_to_freq(key_to_note(i));
      int curr_note = key_to_note(i);
      if(curr_note == active_notes[0]){
        waveform1.frequency(note_freq * voice_multipliers[0]);
        waveform2.frequency(note_freq * voice_multipliers[1]);
      }
      else if(curr_note == active_notes[1]){
        waveform3.frequency(note_freq * voice_multipliers[0]);
        waveform4.frequency(note_freq * voice_multipliers[1]);
      }
      else if(curr_note == active_notes[2]){
        waveform5.frequency(note_freq * voice_multipliers[0]);
        waveform6.frequency(note_freq * voice_multipliers[1]);
      }
      else if(curr_note == active_notes[3]){
        waveform7.frequency(note_freq * voice_multipliers[0]);
        waveform8.frequency(note_freq * voice_multipliers[1]);
      }
      else if(curr_note == active_notes[4]){
        waveform10.frequency(note_freq * voice_multipliers[0]);
        waveform11.frequency(note_freq * voice_multipliers[1]);
      }
      else if(curr_note == active_notes[5]){
        waveform12.frequency(note_freq * voice_multipliers[0]);
        waveform13.frequency(note_freq * voice_multipliers[1]);
      }
    }

    // Update rolling values
    keys_old[i] = keys[i];
  }

  // Drone voice start
  int slide_read = analogRead(SOFT_POT_2);
  int top_freq = note_to_freq(key_to_note(0));
  int bot_freq = note_to_freq(key_to_note(11));
  double note_freq = mapfloat(slide_read, 1023, 1, top_freq, bot_freq);
  if(slide_read > 30 && drone_status == 0){
        waveform15.frequency(note_freq);
        waveform16.frequency(note_freq * voice_multipliers[1]);
        waveform17.frequency(note_freq * voice_multipliers[0]);
        envelope8.noteOn();
        drone_status = 1;
  }
  // Drone Sustain
  else if(slide_read > 30 && drone_status == 1){
    waveform15.frequency(note_freq);
    waveform16.frequency(note_freq * voice_multipliers[1]);
    waveform17.frequency(note_freq * voice_multipliers[0]);
  }

  //Drone end
  else if(slide_read < 30 && drone_status == 1){
        envelope8.noteOff();
        drone_status = 0;
  }
  
  // Update octave value
  for(int i = 12; i < 14; i++){
    // Checkc ranges and update
    if((keys[i] == 1) && (keys_old[i] == 0)){
      if(i == 12 && octave > 1){
        octave --;
      }
      if(i == 13 && octave < 5){
        octave ++;
      }
      // Clear playing notes if octave changes
      if(envelope1.isActive()){
        envelope1.noteOff();
        envelope7.noteOff();
      }
      if(envelope2.isActive()){
        envelope2.noteOff();
      }
      if(envelope3.isActive()){
        envelope3.noteOff();
      }
      if(envelope4.isActive()){
        envelope4.noteOff();
      }
      if(envelope5.isActive()){
        envelope5.noteOff();
      }
      if(envelope6.isActive()){
        envelope6.noteOff();
      }
      if(envelope8.isActive()){
        envelope8.noteOff();
      }
    }
    keys_old[i] = keys[i];
  }
  AudioInterrupts();
}

// Display keys
void print_keys(){
  for(int i = 0; i < 14; i++){
    Serial.print(keys[i]);
    Serial.print(" ");
  }
  Serial.println("");
}

void setup() {
  // Init Serial
  Serial.begin(115200);
  // Attach midi handlers
  usbMIDI.setHandleNoteOn(myNoteOn);
  usbMIDI.setHandleNoteOff(myNoteOff);
  usbMIDI.setHandleControlChange(myControlChange);
  // Configure IO pins
  // Multiplexer select pins
  pinMode(select_pins[0], OUTPUT);
  pinMode(select_pins[1], OUTPUT);
  pinMode(select_pins[2], OUTPUT);
  pinMode(select_pins[3], OUTPUT);
  // LED Pins
  pinMode(LFO_LED, OUTPUT);
  pinMode(ENV_LED, OUTPUT);
  pinMode(USAGE_LED, OUTPUT);
  pinMode(OCTAVE_UP_LED, OUTPUT);
  pinMode(OCTAVE_DOWN_LED, OUTPUT);
  // Boot status light
  digitalWrite(LFO_LED, HIGH);
  // Toggle switches
  pinMode(SWITCH, INPUT);
  pinMode(MOD_SWITCH, INPUT);
  // Touch pin
  pinMode(touch_read_pin, INPUT);
  pinMode(touch_read_pin, INPUT_PULLDOWN);
  // Knob pin
  pinMode(knob_pin, INPUT);
  pinMode(knob_pin, INPUT_PULLDOWN);
  
  // Set dynamic touch thresholds
  set_touch_thresh();

  // Allocate memory for buffers in audio system
  AudioMemory(700);

  // Disable audio interrupts for synchronus param applicatiosn
  AudioNoInterrupts();

  // Anable ADC chip
  sgtl5000_1.enable();
  sgtl5000_1.volume(0.5);

  // Begin voice oscillators
  waveform1.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform2.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform3.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform4.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform5.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform6.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform7.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform8.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform10.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform11.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform12.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform13.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform15.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform16.begin(1.0, 100, WAVEFORM_TRIANGLE);
  waveform17.begin(1.0, 100, WAVEFORM_TRIANGLE);

  // Set LFO
  dc1.amplitude(1.0);
  waveform9.begin(.5, 0, WAVEFORM_TRIANGLE);
  waveform9.offset(0.5);
  dc3.amplitude(1.0);
  waveform14.begin(1.0, 0, WAVEFORM_TRIANGLE);
  waveform14.offset(0.0);

  // Config Envelope
  envelope1.delay(0);
  envelope1.hold(0);
  envelope2.delay(0);
  envelope2.hold(0);
  envelope3.delay(0);
  envelope3.hold(0);
  envelope4.delay(0);
  envelope4.hold(0);
  dc2.amplitude(1.0);

  // Config mixer for voice combination outs
  mixer6.gain(0, 1.0/6.0);
  mixer6.gain(1, 1.0/6.0);
  mixer6.gain(2, 1.0/6.0);
  mixer6.gain(3, 1.0/6.0);
  mixer13.gain(0, 1.0/6.0);
  mixer13.gain(1, 1.0/6.0);
  mixer14.gain(0, 1.0);
  mixer14.gain(1, 1.0);
  mixer14.gain(2, .5);

  // Config voice mixers
  mixer1.gain(0, 1.0);
  mixer1.gain(1, 1.0);
  mixer1.gain(2, 0);
  mixer1.gain(3, 0);
  mixer2.gain(0, 1.0);
  mixer2.gain(1, 1.0);
  mixer2.gain(2, 0);
  mixer2.gain(3, 0);
  mixer3.gain(0, 1.0);
  mixer3.gain(1, 1.0);
  mixer3.gain(2, 0);
  mixer3.gain(3, 0);
  mixer4.gain(0, 1.0);
  mixer4.gain(1, 1.0);
  mixer4.gain(2, 0);
  mixer4.gain(3, 0);
  mixer11.gain(0, 1.0);
  mixer11.gain(1, 1.0);
  mixer11.gain(2, 0);
  mixer11.gain(3, 0);
  mixer12.gain(0, 1.0);
  mixer12.gain(1, 1.0);
  mixer12.gain(2, 0);
  mixer12.gain(3, 0);
  mixer17.gain(0, .25);
  mixer17.gain(1, .25);

  // Delay mixer
  mixer10.gain(0, 1.0);
  mixer10.gain(1, 1.0);

  // Led signal tap queues
  queue1.begin();
  queue2.begin();

  // Enable interrupts, changes now apply
  AudioInterrupts();
}

void loop() {
  // Get values of knobs
  update_knobs();
  
  // Get values of keys
  update_keys();
  
  // Read USB connection for incoming Midi signals
  usbMIDI.read();

  // Apply changes to signal path parameters
  update_signal_path();

  // Apply changes to light values
  update_lights();

  // Convert key presses to notes
  play_keys();

  // Midi notes will be entered by midi handlers

  // Debug
  //print_keys();
  //print_knobs();

  delay(4);
}
