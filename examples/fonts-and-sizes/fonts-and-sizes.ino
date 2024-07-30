//Uncomment only one of the following lines to select your display.
//#define USE_ILI9341   //2.4 inch 320x240 TFT Feather Wing
//#define USE_HX8357    //3.5 inch 480x320 TFT Feather Wing
//#define USE_HALLOWING //Adafruit Hallowing M0 Express
//#define USE_PYGAMER   //Adafruit PyGamer M4 Express
#define USE_GIGA_GFX    //Arduino Giga R1 with display
//#define USE_MCUFRIEND     // 2.8 inch 240x320 MCUFRIEND displays
#include "board_select.h"

// Example program for font collections.

#include "FontCollection.h"

// Uses libraries:
// Any graphics library inheriting from Adafruit

// Text and UI symbol fonts go into a font collection.
// This one is for 18pt Sans
#include <fonts/FreeSans18pt7b.h>
#include "UISymbolSans18pt7b.h"
FontCollection fc18(&display, &FreeSans18pt7b, &UISymbolSans18pt7b, 1, 1);

// This one is for 18pt symbols with a 3x default system font.
FontCollection fc18d(&display, NULL, &UISymbolSans18pt7b, 3, 1);

// This one is for 24pt Sans
#include <fonts/FreeSans24pt7b.h>
#include "UISymbolSans24pt7b.h"
FontCollection fc24(&display, &FreeSans24pt7b, &UISymbolSans24pt7b, 1, 1);


void setup()
{
  int x = 20, y = 30;
  int16_t xr, yr;
  uint16_t wr, hr;

  Serial.begin(9600);
  while(!Serial) {}

  Initialize_Display();

  display.fillScreen(0);

  fc18.getTextBounds("Text font 18 Sans", x, y, &xr, &yr, &wr, &hr);
  display.drawRect(xr, yr, wr, hr, 0xFFFF);
  display.setCursor(x, y);
  fc18.print("Text font 18 Sans");
  y += 40;
  display.setCursor(x, y);
  fc18.print("Symbol font ");
  fc18.print((char)8);
  fc18.print((char)25);

  y += 40;
  fc18d.getTextBounds("System font 3x", x, y, &xr, &yr, &wr, &hr);
  display.drawRect(xr, yr, wr, hr, 0xFFFF);
  display.setCursor(x, y);
  fc18d.print("System font 3x");
  y += 40;
  display.setCursor(x, y);
  fc18d.print("Symbol font ");
  fc18d.print((char)8);
  fc18d.print((char)25);

  y += 50;
  fc24.getTextBounds("Text font 24 Sans", x, y, &xr, &yr, &wr, &hr);
  display.drawRect(xr, yr, wr, hr, 0xFFFF);
  display.setCursor(x, y);
  fc24.print("Text font 24 Sans");
  y += 50;
  display.setCursor(x, y);
  fc24.print("Symbol font ");
  fc24.print((char)8);
  fc24.print((char)25);

  y += 80;
  fc24.setTextSize(2);
  fc24.getTextBounds("24 Sans double", x, y, &xr, &yr, &wr, &hr);
  display.drawRect(xr, yr, wr, hr, 0xFFFF);
  display.setCursor(x, y);
  fc24.print("24 Sans double");
  y += 80;
  display.setCursor(x, y);
  fc24.print("Symbol font ");
  fc24.print((char)8);
  fc24.print((char)25);

}

void loop() {

}