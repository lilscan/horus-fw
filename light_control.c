#include "ws2812.h"
#include "nuts_bolts.h"

struct cRGBW led[1];
void light_set_rgbw(uint8_t num_leds, uint8_t r,uint8_t g,uint8_t b,uint8_t w)
{
  led[0].r=r;
  led[0].g=g;
  led[0].b=b;
  led[0].w=w;
  for(int i=0; i<num_leds; ++i)
    ws2812_sendarray((uint8_t *)&led[0],4);	
  delay_ms(50);
}

void light_set_rgb(uint8_t num_leds, uint8_t r,uint8_t g,uint8_t b)
{
  led[0].r=r;
  led[0].g=g;
  led[0].b=b;
  led[0].w=0;
  for(int i=0; i<num_leds; ++i)
    ws2812_sendarray((uint8_t *)&led[0],3);	        // send only 3 bytes per LED
  delay_ms(50);
}
