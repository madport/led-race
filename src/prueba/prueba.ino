 #include <Adafruit_NeoPixel.h>
#define MAXLED         120 // MAX LEDs actives on strip

#define PIN_LED        2

int NPIXELS = MAXLED; // leds on track

int color1 = 255;
int color2 = 255;
int color3 = 255;

Adafruit_NeoPixel track = Adafruit_NeoPixel(MAXLED, PIN_LED, NEO_GRB + NEO_KHZ800);


void setup() {
  Serial.begin(9600);
  track.begin();
}

void all_leds() 
{
  int lenght = 5;
  
  for (int i = 0; i < NPIXELS; i++) {
    track.setPixelColor(i, track.Color(color1, color2, color3));
    //if (i >= lenght){ track.setPixelColor(i -lenght, track.Color(0, 0, 0)); }
    track.show();
  }
  
   
}



void loop() {
    all_leds();
    Serial.println("");

}
