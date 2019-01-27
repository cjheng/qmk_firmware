#pragma once

// Enable/disable LEDs based on layout.
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

// Disable backlight when USB suspended (PC sleep/hibernate/shutdown).
#undef RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED
#define RGB_BACKLIGHT_DISABLE_WHEN_USB_SUSPENDED 1

// Disable backlight after 2 minutes.
#undef RGB_BACKLIGHT_DISABLE_AFTER_TIMEOUT
#define RGB_BACKLIGHT_DISABLE_AFTER_TIMEOUT 2

// Redefine number of layers for dynamic keymap (untested). Default 4.
// Currently dynamic keymap is disabled in keymap rules.mk.
// #undef DYNAMIC_KEYMAP_LAYER_COUNT
// #define DYNAMIC_KEYMAP_LAYER_COUNT 5

// How long before a tap becomes a hold. If set above 500, a key tapped during
// the tapping term will turn it into a hold too. Default 200.
#undef TAPPING_TERM
#define TAPPING_TERM 100

// How many taps before triggering the toggle. Default 5.
# undef TAPPING_TOGGLE
#define TAPPING_TOGGLE 2
