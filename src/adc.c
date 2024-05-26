/*B-em v2.2 by Tom Walker
  ADC emulation*/

#include "b-em.h"
#include "adc.h"
#include "via.h"
#include "sysvia.h"

static uint8_t adc_status,adc_high,adc_low,adc_latch;
int adc_time;

uint8_t adc_read(uint16_t addr)
{
        switch (addr & 3)
        {
            case 0:
                return adc_status;
                break;
            case 1:
                return adc_high;
                break;
            case 2:
                return adc_low;
                break;
        }
        return 0x40;
}

void adc_write(uint16_t addr, uint8_t val)
{
        if (!(addr & 3))
        {
                adc_latch  = val;
                adc_time   = (val & 8) ? 156 : 62; /* Choose time according to requested accuracy */
                adc_status = (val & 0xF) | 0x80; /*Busy, converting*/
                sysvia_set_cb1(1);
//                printf("ADC conversion - %02X\n",val);
        }
}

void adc_poll()
{
    uint32_t val = (uint32_t)(joyaxes[adc_status & 3] * -32760.0 + 32760); // putting the ) after the .0 makes the numbers 32k+ ONLY in VS
    if (val > 0xFFFF)
        val = 0xFFFF;
    adc_status =(adc_status & 0xF) | 0x40; /*Not busy, conversion complete*/
    adc_status|=(val & 0xC000) >> 10;
    adc_high   = val >> 8;
    adc_low    = val & 0xFF;
    sysvia_set_cb1(0);
}

void adc_init()
{
        adc_status = 0x40;            /*Not busy, conversion complete*/
        adc_high = adc_low = adc_latch = 0;
        adc_time = 0;
        al_install_joystick();
}

void adc_savestate(FILE *f)
{
    unsigned char bytes[5];
    bytes[0] = adc_status;
    bytes[1] = adc_low;
    bytes[2] = adc_high;
    bytes[3] = adc_latch;
    bytes[4] = adc_time;
    fwrite(bytes, sizeof(bytes), 1, f);
}

void adc_loadstate(FILE *f)
{
    unsigned char bytes[5];
    fread(bytes, sizeof(bytes), 1, f);
    adc_status = bytes[0];
    adc_low    = bytes[1];
    adc_high   = bytes[2];
    adc_latch  = bytes[3];
    adc_time   = bytes[4];
}
