#include <SoftwareSerial.h>
#include "Adafruit_Soundboard.h"

// Choose any two pins that can be used with SoftwareSerial to RX & TX
#define SFX_TX 18
#define SFX_RX 19
// Connect to the RST pin on the Sound Board
#define SFX_RST 4

// we'll be using software serial
SoftwareSerial ss = SoftwareSerial(SFX_TX, SFX_RX);

// pass the software serial to Adafruit_soundboard, the second
// argument is the debug port (not used really) and the third 
// arg is the reset pin
Adafruit_Soundboard sfx = Adafruit_Soundboard(&ss, NULL, SFX_RST);

void setup() {
  
  ss.begin(9600);
}

void loop()

{

    sfx.playTrack("T01     OGG"); //the neon demon - kenobi 

}

