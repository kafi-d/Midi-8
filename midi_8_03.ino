#include <MIDI.h>  // Add Midi Library

#define LED 13    // Arduino Board LED is on Pin 13

//Create an instance of the library with default name, serial port and settings
MIDI_CREATE_DEFAULT_INSTANCE();

void setup() {
  //pinMode (LED, OUTPUT); // Set Arduino board pin 13 to output
  //MIDI.begin(MIDI_CHANNEL_OMNI); // Initialize the Midi Library.
  // OMNI sets it to listen to all channels.. MIDI.begin(2) would set it 
  // to respond to notes on channel 2 only.
  //MIDI.setHandleNoteOn(MyHandleNoteOn); // This is important!! This command
  // tells the Midi Library which function you want to call when a NOTE ON command
  // is received. In this case it's "MyHandleNoteOn".
  //MIDI.setHandleNoteOff(MyHandleNoteOff); // This command tells the Midi Library 
  // to call "MyHandleNoteOff" when a NOTE OFF command is received.

pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
pinMode(5,OUTPUT);
pinMode(6,OUTPUT);
pinMode(7,OUTPUT);
pinMode(8,OUTPUT); 
pinMode(9,OUTPUT);

digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
for (int i = 2; i <= 10; i++){
digitalWrite(i,HIGH);
delay(50);  
digitalWrite(i,LOW);
delay(50);
  }
  for (int i = 9; i >= 2; i--){
digitalWrite(i,HIGH);
delay(50);  
digitalWrite(i,LOW);
delay(50);
  }
 for (int i = 2; i <= 5; i++){
digitalWrite(i,HIGH);
digitalWrite(i+4,HIGH);
delay(50);  
digitalWrite(i,LOW);
digitalWrite(i+4,LOW);
delay(50);
  } 
    for (int i = 5; i >= 2; i--){
digitalWrite(i,HIGH);
digitalWrite(i+4,HIGH);
delay(50);  
digitalWrite(i,LOW);
digitalWrite(i+4,LOW);
delay(50);
  }
for (int i = 2; i <= 20; i++){
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,HIGH);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
delay(10*i);  
digitalWrite(2,LOW);
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,LOW);
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,LOW);
delay(10*i);
  }
//digitalWrite(i,HIGH);
//delay(200);  
//digitalWrite(i,LOW);    

MIDI.begin(10); // Midi channel

MIDI.setHandleNoteOn(MyHandleNoteOn); // This is important!! This command
// tells the Midi Library which function you want to call when a NOTE ON command
// is received. In this case it's "MyHandleNoteOn".
MIDI.setHandleNoteOff(MyHandleNoteOff); // This command tells the Midi Library
// to call "MyHandleNoteOff" when a NOTE OFF command is received.
}

void loop() { // Main loop










MIDI.read(); // Continuously check if Midi data has been received.
}

void MyHandleNoteOn(byte channel, byte pitch, byte velocity) {
if (channel == 10) //Works only with MIDI channel 10
{
if (pitch == 36)
digitalWrite(2,HIGH); //Turn Kick on
if (pitch == 37)
digitalWrite(3,HIGH); //Turn Snare on
if (pitch == 38)
digitalWrite(4,HIGH); //Turn Hit Hat on
if (pitch == 39)
digitalWrite(5,HIGH); //Turn Kick on
if (pitch == 40)
digitalWrite(6,HIGH); //Turn Snare on
if (pitch == 42)
digitalWrite(7,HIGH); //Turn Hit Hat on
if (pitch == 43)
digitalWrite(8,HIGH); //Turn Kick on
if (pitch == 44)
digitalWrite(9,HIGH); //Turn Snare on

}

}

void MyHandleNoteOff(byte channel, byte pitch, byte velocity) {
if (channel == 10)
{
if (pitch == 36)
digitalWrite(2,LOW); //Turn Kick off
if (pitch == 37)
digitalWrite(3,LOW); //Turn Snare off
if (pitch == 38)
digitalWrite(4,LOW); //Turn Hit Hat off
if (pitch == 39)
digitalWrite(5,LOW); //Turn Kick off
if (pitch == 40)
digitalWrite(6,LOW); //Turn Snare off
if (pitch == 42)
digitalWrite(7,LOW); //Turn Hit Hat off
if (pitch == 43)
digitalWrite(8,LOW); //Turn Kick off
if (pitch == 44)
digitalWrite(9,LOW); //Turn Snare off

}

}