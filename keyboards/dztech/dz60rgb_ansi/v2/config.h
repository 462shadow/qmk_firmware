#pragma once

/* USB Device descriptor parameter */
#define VENDOR_ID       0x445A
#define PRODUCT_ID      0x1221
#define DEVICE_VER      0x0002
#define MANUFACTURER    DZTECH
#define PRODUCT         DZ60RGB_ANSI

/* key matrix size */
#define MATRIX_ROWS 5
#define MATRIX_COLS 14

/*
 * Keyboard Matrix Assignments
 *
 * Change this to how you wired your keyboard
 * COLS: AVR pins used for columns, left to right
 * ROWS: AVR pins used for rows, top to bottom
 * DIODE_DIRECTION: COL2ROW = COL = Anode (+), ROW = Cathode (-, marked on diode)
 *                  ROW2COL = ROW = Anode (+), COL = Cathode (-, marked on diode)
 *
 */
#define MATRIX_ROW_PINS { F5, F4, F1, B3, B2 }
#define MATRIX_COL_PINS { C7, F7, F6, F0, B0, B1, B4, D7, D6, D4, D5, D3, D2, B7 }
#define UNUSED_PINS

/* COL2ROW, ROW2COL*/
#define DIODE_DIRECTION COL2ROW

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 3

/* disable these deprecated features by default */
#define NO_ACTION_MACRO
#define NO_ACTION_FUNCTION

#ifdef RGB_MATRIX_ENABLE
#    define RGB_MATRIX_LED_PROCESS_LIMIT (DRIVER_LED_TOTAL + 4) / 5 // limits the number of LEDs to process in an animation per task run (increases keyboard responsiveness)
#    define RGB_MATRIX_LED_FLUSH_LIMIT 16 // limits in milliseconds how frequently an animation will update the LEDs. 16 (16ms) is equivalodes (must use code functions to control the feature)
#    define RGB_MATRIX_STARTUP_HUE 0 // Sets the default hue value, if none has been set
#    define RGB_MATRIX_STARTUP_SAT 255 // Sets the default saturation value, if none has been set
#    define RGB_MATRIX_STARTUP_SPD 127 // Sets the default animation speed, if none has been set
#    define RGB_DISABLE_AFTER_TIMEOUT 0 // number of ticks to wait until disabling effects
#    define RGB_DISABLE_WHEN_USB_SUSPENDED true // turn off effects when suspended
#    define RGB_MATRIX_KEYPRESSES
#    define RGB_MATRIX_FRAMEBUFFER_EFFECTS
#    define DRIVER_ADDR_1 0b1010000
#    define DRIVER_ADDR_2 0b1010000 // this is here for compliancy reasons.
#    define DRIVER_COUNT 2
#    define DRIVER_1_LED_TOTAL 61
#    define DRIVER_LED_TOTAL DRIVER_1_LED_TOTAL
#endif
