#include <Adafruit_NeoPixel.h>
#define MAXLED         49 // MAX LEDs actives on strip

#define PIN_LED        2

int NPIXELS=MAXLED; // leds on track

#define COLOR1    track.Color(255,0,0)
#define COLOR2    track.Color(0,255,0)

Adafruit_NeoPixel track = Adafruit_NeoPixel(MAXLED, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
    track.begin(); 
}

void all_leds(){
    for(int i=0;i<NPIXELS;i++){
        track.setPixelColor(i, track.Color(0,0,255));
        track.show();
    }
}

void loop(){
    all_leds();
}