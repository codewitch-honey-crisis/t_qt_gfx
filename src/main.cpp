#include <Arduino.h>
#include <tft_io.hpp>
#include <st7789.hpp>
#include <gfx.hpp>
using namespace arduino;
using namespace gfx;

using bus_t = tft_spi_ex<0,5,2,-1,3>;
using lcd_t = st7789< 128,128,6,1,-1,bus_t,0,false,400,100>;
using color_t = color<lcd_t::pixel_type>;

lcd_t lcd;

void setup() {
  pinMode(10,OUTPUT);
  digitalWrite(10,LOW);
  draw::filled_rectangle(lcd,lcd.bounds(),color_t::red);
}

void loop() {
  // put your main code here, to run repeatedly:
}
