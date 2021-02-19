/* Teletext Font from Brandy BASIC */

#ifndef TTX_FONT_INC
#define TTX_FONT_INC

static const unsigned short mode7font[96][20] = {
/* 20   */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 21 ! */ { 0x0000u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0000u, 0x0000u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 22 " */ { 0x0000u, 0x0c60u, 0x0c60u, 0x0c60u, 0x0c60u,
             0x0c60u, 0x0c60u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 23 # */ { 0x0000u, 0x03f0u, 0x07f8u, 0x0e1cu, 0x0c0cu,
             0x0c00u, 0x0c00u, 0x3f80u, 0x3f80u, 0x0c00u,
             0x0c00u, 0x0c00u, 0x0c00u, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 24 $ */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x399cu, 0x318cu,
             0x3180u, 0x3980u, 0x1ff0u, 0x0ff8u, 0x019cu,
             0x018cu, 0x318cu, 0x399cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 25 % */ { 0x0000u, 0x3c00u, 0x3c0cu, 0x3c1cu, 0x3c38u,
             0x0070u, 0x00e0u, 0x01c0u, 0x0380u, 0x0700u,
             0x0e00u, 0x1c3cu, 0x383cu, 0x303cu, 0x003cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 26 & */ { 0x0000u, 0x0e00u, 0x1f00u, 0x3b80u, 0x3180u,
             0x3380u, 0x3f00u, 0x1e00u, 0x1f00u, 0x3f8cu,
             0x31dcu, 0x30f8u, 0x3878u, 0x1ffcu, 0x0ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 27 ' */ { 0x0000u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 28 ( */ { 0x0000u, 0x0060u, 0x00e0u, 0x01c0u, 0x0380u,
             0x0700u, 0x0600u, 0x0600u, 0x0600u, 0x0600u,
             0x0700u, 0x0380u, 0x01c0u, 0x00e0u, 0x0060u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 29 ) */ { 0x0000u, 0x0600u, 0x0700u, 0x0380u, 0x01c0u,
             0x00e0u, 0x0060u, 0x0060u, 0x0060u, 0x0060u,
             0x00e0u, 0x01c0u, 0x0380u, 0x0700u, 0x0600u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 2A * */ { 0x0000u, 0x0180u, 0x0180u, 0x318cu, 0x399cu,
             0x1ff8u, 0x0ff0u, 0x0180u, 0x0180u, 0x0ff0u,
             0x1ff8u, 0x399cu, 0x318cu, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 2B + */ { 0x0000u, 0x0000u, 0x0000u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x1ff8u, 0x1ff8u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 2C , */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0380u, 0x0300u, 0x0000u, 0x0000u, 0x0000u },
/* 2D - */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0ff0u, 0x0ff0u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 2E . */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 2F / */ { 0x0000u, 0x0000u, 0x0018u, 0x0038u, 0x0070u,
             0x00e0u, 0x01c0u, 0x0380u, 0x0700u, 0x0e00u,
             0x1c00u, 0x1800u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 30 0 */ { 0x0000u, 0x03c0u, 0x07e0u, 0x0e70u, 0x1c38u,
             0x381cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x381cu, 0x1c38u, 0x0e70u, 0x07e0u, 0x03c0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 31 1 */ { 0x0000u, 0x0180u, 0x0180u, 0x0f80u, 0x0f80u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0ff0u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 32 2 */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x000cu, 0x001cu, 0x03f8u, 0x07f0u, 0x0e00u,
             0x1c00u, 0x3800u, 0x3000u, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 33 3 */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x001cu, 0x0038u,
             0x0070u, 0x00e0u, 0x01f8u, 0x01fcu, 0x000cu,
             0x000cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 34 4 */ { 0x0000u, 0x0070u, 0x00f0u, 0x01f0u, 0x03b0u,
             0x0730u, 0x0e30u, 0x1c30u, 0x3830u, 0x3ffcu,
             0x3ffcu, 0x0030u, 0x0030u, 0x0030u, 0x0030u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 35 5 */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x3000u, 0x3000u,
             0x3ff0u, 0x3ff8u, 0x001cu, 0x000cu, 0x000cu,
             0x000cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 36 6 */ { 0x0000u, 0x01f0u, 0x07f0u, 0x0f00u, 0x1c00u,
             0x3800u, 0x3000u, 0x3ff0u, 0x3ff8u, 0x301cu,
             0x300cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 37 7 */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x000cu, 0x001cu,
             0x0038u, 0x0070u, 0x00e0u, 0x01c0u, 0x0380u,
             0x0700u, 0x0600u, 0x0600u, 0x0600u, 0x0600u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 38 8 */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x300cu, 0x381cu, 0x1ff8u, 0x1ff8u, 0x381cu,
             0x300cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 39 9 */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu, 0x000cu,
             0x001cu, 0x0038u, 0x00f0u, 0x0fe0u, 0x0f80u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 3A : */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0180u, 0x0180u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 3B ; */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0180u, 0x0180u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0380u, 0x0300u, 0x0000u, 0x0000u, 0x0000u },
/* 3C < */ { 0x0000u, 0x0060u, 0x00e0u, 0x01c0u, 0x0380u,
             0x0700u, 0x0e00u, 0x1c00u, 0x1c00u, 0x0e00u,
             0x0700u, 0x0380u, 0x01c0u, 0x00e0u, 0x0060u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 3D = */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x3ffcu, 0x3ffcu, 0x0000u, 0x0000u, 0x3ffcu,
             0x3ffcu, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 3E > */ { 0x0000u, 0x0600u, 0x0700u, 0x0380u, 0x01c0u,
             0x00e0u, 0x0070u, 0x0038u, 0x0038u, 0x0070u,
             0x00e0u, 0x01c0u, 0x0380u, 0x0700u, 0x0600u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 3F ? */ { 0x0000u, 0x0fe0u, 0x1ff0u, 0x3838u, 0x3018u,
             0x0038u, 0x0070u, 0x00e0u, 0x01c0u, 0x0180u,
             0x0180u, 0x0000u, 0x0000u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 40 @ */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x31fcu, 0x31fcu, 0x318cu, 0x318cu, 0x31fcu,
             0x31fcu, 0x3000u, 0x3800u, 0x1ff0u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 41 A */ { 0x0000u, 0x0180u, 0x03c0u, 0x07e0u, 0x0e70u,
             0x1c38u, 0x381cu, 0x300cu, 0x300cu, 0x3ffcu,
             0x3ffcu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 42 B */ { 0x0000u, 0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu,
             0x300cu, 0x301cu, 0x3ff8u, 0x3ff8u, 0x301cu,
             0x300cu, 0x300cu, 0x301cu, 0x3ff8u, 0x3ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 43 C */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x3000u, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 44 D */ { 0x0000u, 0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x301cu, 0x3ff8u, 0x3ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 45 E */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x3000u, 0x3000u,
             0x3000u, 0x3000u, 0x3ff0u, 0x3ff0u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 46 F */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x3000u, 0x3000u,
             0x3000u, 0x3000u, 0x3ff0u, 0x3ff0u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 47 G */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x303cu,
             0x303cu, 0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 48 H */ { 0x0000u, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x3ffcu, 0x3ffcu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 49 I */ { 0x0000u, 0x0ff0u, 0x0ff0u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0ff0u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 4A J */ { 0x0000u, 0x000cu, 0x000cu, 0x000cu, 0x000cu,
             0x000cu, 0x000cu, 0x000cu, 0x000cu, 0x000cu,
             0x000cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 4B K */ { 0x0000u, 0x1818u, 0x1838u, 0x1870u, 0x18e0u,
             0x19c0u, 0x1b80u, 0x1f00u, 0x1f00u, 0x1b80u,
             0x19c0u, 0x18e0u, 0x1870u, 0x1838u, 0x1818u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 4C L */ { 0x0000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 4D M */ { 0x0000u, 0x300cu, 0x300cu, 0x381cu, 0x3c3cu,
             0x3e7cu, 0x37ecu, 0x33ccu, 0x318cu, 0x318cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 4E N */ { 0x0000u, 0x300cu, 0x300cu, 0x380cu, 0x3c0cu,
             0x3e0cu, 0x370cu, 0x338cu, 0x31ccu, 0x30ecu,
             0x307cu, 0x303cu, 0x301cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 4F O */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 50 P */ { 0x0000u, 0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu,
             0x300cu, 0x301cu, 0x3ff8u, 0x3ff0u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 51 Q */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x30ccu,
             0x30ecu, 0x3078u, 0x3838u, 0x1ffcu, 0x0fccu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 52 R */ { 0x0000u, 0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu,
             0x300cu, 0x301cu, 0x3ff8u, 0x3ff0u, 0x31c0u,
             0x30e0u, 0x3070u, 0x3038u, 0x301cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 53 S */ { 0x0000u, 0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu,
             0x3000u, 0x3800u, 0x1ff0u, 0x0ff8u, 0x001cu,
             0x000cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 54 T */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 55 U */ { 0x0000u, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 56 V */ { 0x0000u, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x381cu, 0x1818u, 0x1c38u, 0x0c30u, 0x0e70u,
             0x07e0u, 0x03c0u, 0x03c0u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 57 W */ { 0x0000u, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x318cu, 0x318cu, 0x318cu,
             0x318cu, 0x318cu, 0x3ffcu, 0x1ff8u, 0x0e70u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 58 X */ { 0x0000u, 0x300cu, 0x300cu, 0x381cu, 0x1c38u,
             0x0e70u, 0x07e0u, 0x03c0u, 0x03c0u, 0x07e0u,
             0x0e70u, 0x1c38u, 0x381cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 59 Y */ { 0x0000u, 0x300cu, 0x300cu, 0x381cu, 0x1c38u,
             0x0e70u, 0x07e0u, 0x03c0u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 5A Z */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x001cu, 0x0038u,
             0x0070u, 0x00e0u, 0x01c0u, 0x0380u, 0x0700u,
             0x0e00u, 0x1c00u, 0x3800u, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 5B [ */ { 0x0000u, 0x0000u, 0x0000u, 0x0300u, 0x0700u,
             0x0e00u, 0x1c00u, 0x3ffcu, 0x3ffcu, 0x1c00u,
             0x0e00u, 0x0700u, 0x0300u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 5C \ */ { 0x0000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x31f0u,
             0x31f8u, 0x000cu, 0x000cu, 0x0018u, 0x0070u,
             0x00c0u, 0x0180u, 0x01fcu, 0x01fcu, 0x0000u },
/* 5D ] */ { 0x0000u, 0x0000u, 0x0000u, 0x00c0u, 0x00e0u,
             0x0070u, 0x0038u, 0x3ffcu, 0x3ffcu, 0x0038u,
             0x0070u, 0x00e0u, 0x00c0u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 5E ^ */ { 0x0000u, 0x0000u, 0x0000u, 0x0180u, 0x03c0u,
             0x07e0u, 0x0ff0u, 0x1db8u, 0x1998u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 5F _ */ { 0x0000u, 0x0630u, 0x0630u, 0x0630u, 0x0630u,
             0x1ffcu, 0x1ffcu, 0x0630u, 0x0630u, 0x1ffcu,
             0x1ffcu, 0x0630u, 0x0630u, 0x0630u, 0x0630u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 60 ` */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x3ffcu, 0x3ffcu, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 61 a */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x1ff0u, 0x1ff8u, 0x001cu, 0x000cu, 0x1ffcu,
             0x3ffcu, 0x300cu, 0x300cu, 0x3ffcu, 0x1ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 62 b */ { 0x0000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x301cu, 0x3ff8u, 0x3ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 63 c */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0ffcu, 0x1ffcu, 0x3800u, 0x3000u, 0x3000u,
             0x3000u, 0x3000u, 0x3800u, 0x1ffcu, 0x0ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 64 d */ { 0x0000u, 0x000cu, 0x000cu, 0x000cu, 0x000cu,
             0x0ffcu, 0x1ffcu, 0x380cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 65 e */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu, 0x3ffcu,
             0x3ffcu, 0x3000u, 0x3800u, 0x1ff8u, 0x0ff8u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 66 f */ { 0x0000u, 0x0030u, 0x00f0u, 0x01c0u, 0x0180u,
             0x0180u, 0x0180u, 0x0ff0u, 0x0ff0u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 67 g */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0ffcu, 0x1ffcu, 0x380cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu,
             0x000cu, 0x001cu, 0x0ff8u, 0x0ff0u, 0x0000u },
/* 68 h */ { 0x0000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 69 i */ { 0x0000u, 0x0180u, 0x0180u, 0x0000u, 0x0000u,
             0x0f80u, 0x0f80u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0ff0u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 6A j */ { 0x0000u, 0x0180u, 0x0180u, 0x0000u, 0x0000u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0380u, 0x0f00u, 0x0c00u, 0x0000u },
/* 6B k */ { 0x0000u, 0x1800u, 0x1800u, 0x1800u, 0x1800u,
             0x1818u, 0x1838u, 0x18f0u, 0x1bc0u, 0x1f80u,
             0x1f80u, 0x19c0u, 0x18f0u, 0x1838u, 0x1818u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 6C l */ { 0x0000u, 0x0f80u, 0x0f80u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x0180u, 0x0ff0u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 6D m */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x3e30u, 0x3ff8u, 0x33fcu, 0x318cu, 0x318cu,
             0x318cu, 0x318cu, 0x318cu, 0x318cu, 0x318cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 6E n */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 6F o */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0ff0u, 0x1ff8u, 0x381cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x381cu, 0x1ff8u, 0x0ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 70 p */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x3ff0u, 0x3ff8u, 0x301cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x301cu, 0x3ff8u, 0x3ff0u,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x0000u },
/* 71 q */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0ffcu, 0x1ffcu, 0x380cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu,
             0x000cu, 0x000cu, 0x000cu, 0x000cu, 0x0000u },
/* 72 r */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x31fcu, 0x33fcu, 0x3e00u, 0x3c00u, 0x3000u,
             0x3000u, 0x3000u, 0x3000u, 0x3000u, 0x3000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 73 s */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x0ffcu, 0x1ffcu, 0x3000u, 0x3000u, 0x1ff0u,
             0x0ff8u, 0x000cu, 0x000cu, 0x3ff8u, 0x3ff0u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 74 t */ { 0x0000u, 0x0180u, 0x0180u, 0x0180u, 0x0180u,
             0x0ff0u, 0x0ff0u, 0x0180u, 0x0180u, 0x0180u,
             0x0180u, 0x0180u, 0x01c0u, 0x00f0u, 0x0030u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 75 u */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 76 v */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x300cu, 0x300cu, 0x300cu, 0x381cu, 0x1818u,
             0x1c38u, 0x0e70u, 0x07e0u, 0x03c0u, 0x0180u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 77 w */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x318cu,
             0x318cu, 0x318cu, 0x3ffcu, 0x1ff8u, 0x0e70u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 78 x */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x300cu, 0x381cu, 0x1e78u, 0x0ff0u, 0x03c0u,
             0x03c0u, 0x0ff0u, 0x1e78u, 0x381cu, 0x300cu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 79 y */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x300cu, 0x300cu, 0x300cu, 0x300cu, 0x300cu,
             0x300cu, 0x300cu, 0x380cu, 0x1ffcu, 0x0ffcu,
             0x000cu, 0x001cu, 0x0ff8u, 0x0ff0u, 0x0000u },
/* 7A z */ { 0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u,
             0x3ffcu, 0x3ffcu, 0x0038u, 0x00f0u, 0x01e0u,
             0x0780u, 0x0f00u, 0x1c00u, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 7B { */ { 0x0000u, 0x1800u, 0x1800u, 0x1800u, 0x1800u,
             0x1800u, 0x1800u, 0x1800u, 0x1800u, 0x1818u,
             0x1838u, 0x00f8u, 0x0198u, 0x0318u, 0x0318u,
             0x03f8u, 0x03f8u, 0x0018u, 0x0018u, 0x0000u },
/* 7C | */ { 0x0000u, 0x0c60u, 0x0c60u, 0x0c60u, 0x0c60u,
             0x0c60u, 0x0c60u, 0x0c60u, 0x0c60u, 0x0c60u,
             0x0c60u, 0x0c60u, 0x0c60u, 0x0c60u, 0x0c60u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 7D } */ { 0x0000u, 0x3e00u, 0x3f00u, 0x0180u, 0x0180u,
             0x3f00u, 0x3f00u, 0x0180u, 0x0180u, 0x3f0cu,
             0x3e1cu, 0x007cu, 0x00ccu, 0x018cu, 0x018cu,
             0x01fcu, 0x01fcu, 0x000cu, 0x000cu, 0x0000u },
/* 7E ~ */ { 0x0000u, 0x0000u, 0x0000u, 0x0180u, 0x0180u,
             0x0000u, 0x0000u, 0x3ffcu, 0x3ffcu, 0x0000u,
             0x0000u, 0x0180u, 0x0180u, 0x0000u, 0x0000u,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u },
/* 7F   */ { 0x0000u, 0x3ffcu, 0x3ffcu, 0x3ffcu, 0x3ffcu,
             0x3ffcu, 0x3ffcu, 0x3ffcu, 0x3ffcu, 0x3ffcu,
             0x3ffcu, 0x3ffcu, 0x3ffcu, 0x3ffcu, 0x3ffcu,
             0x0000u, 0x0000u, 0x0000u, 0x0000u, 0x0000u }
};
#endif