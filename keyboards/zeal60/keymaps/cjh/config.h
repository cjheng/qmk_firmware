#pragma once

// enable/disable LEDs based on layout
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

// disable backlight when USB suspended (PC sleep/hibernate/shutdown)
#undef RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED
#define RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1

// redefine number of layers for dynamic keymap (untested)
// currently dynamic keymap is disabled in keymap rules.mk
// #undef DYNAMIC_KEYMAP_LAYER_COUNT
// #define DYNAMIC_KEYMAP_LAYER_COUNT 5

// tap dance tapping term
// #define TAPPING_TERM 150
