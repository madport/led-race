#include <Adafruit_NeoPixel.h>
#define MAXLED         50 // MAX LEDs actives on strip

#define PIN_LED        2

int NPIXELS = MAXLED; // leds on track

Adafruit_NeoPixel track = Adafruit_NeoPixel(MAXLED, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {
  track.begin();
}

void all_leds() {
  for (int i = 1; i < NPIXELS; i++) {
    track.setPixelColor(i, track.Color(0, 255, 0));
    track.setPixelColor(i-1, track.Color(0, 0, 0));
    track.show();
    delay(1000);
  }
}

void loop() {
  all_leds();

}
