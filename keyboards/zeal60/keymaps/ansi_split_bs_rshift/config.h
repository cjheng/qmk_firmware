#ifndef CONFIG_USER_H
#define CONFIG_USER_H

#include "../../config.h"

/* enable/disable LEDs based on layout */
#undef RGB_BACKLIGHT_USE_SPLIT_BACKSPACE
#define RGB_BACKLIGHT_USE_SPLIT_BACKSPACE 0

#undef RGB_BACKLIGHT_USE_SPLIT_LEFT_SHIFT
#define RGB_BACKLIGHT_USE_SPLIT_LEFT_SHIFT 0

#undef RGB_BACKLIGHT_USE_SPLIT_RIGHT_SHIFT
#define RGB_BACKLIGHT_USE_SPLIT_RIGHT_SHIFT 0

#undef RGB_BACKLIGHT_USE_7U_SPACEBAR
#define RGB_BACKLIGHT_USE_7U_SPACEBAR 0

#undef RGB_BACKLIGHT_USE_ISO_ENTER
#define RGB_BACKLIGHT_USE_ISO_ENTER 0

#undef RGB_BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS
#define RGB_BACKLIGHT_DISABLE_HHKB_BLOCKER_LEDS 0

#endif //CONFIG_USER_H 
