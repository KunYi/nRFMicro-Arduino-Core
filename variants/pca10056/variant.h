#ifndef _PCA10056_H_
#define _PCA10056_H_

#define TARGET_PCA10056

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

// ASSUMES CRYSTAL OSCILLATOR IS USED
#define USE_LFXO      // Board uses 32khz crystal for LF
//#define USE_LFRC    // Board uses RC for LF

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

#define PINS_COUNT           (22)
#define NUM_DIGITAL_PINS     (22)
#define NUM_ANALOG_INPUTS    (6)
#define NUM_ANALOG_OUTPUTS   (0)

// 3V3 Regulator Disable
#define PIN_EXT_VCC          (26) // EXT_VCC is P1.09 (set high to disable 3v3)
#define EXT_VCC              (PIN_EXT_VCC)

// LEDs
#define PIN_LED              (27) // USR LED is P1.10
#define LED_PWR              (PINS_COUNT) // no LED_PWR
#define PIN_NEOPIXEL         (PINS_COUNT) // no neopixel
#define NEOPIXEL_NUM         0
#define LED_BLUE             PIN_LED // required by bluefruit library

#define LED_BUILTIN          PIN_LED

#define LED_STATE_ON         1         // State when LED is on

#define PIN_VBAT             (25) // P0.04/AIN2 (VBAT) - reads battery voltage

/*
 * Buttons
 */
#define PIN_BUTTON1          (PINS_COUNT) // no button as of version 1.2

// Digital PINs
#define D0 (0ul) // P1.01
#define D1 (1ul) // P1.02
#define D2 (2ul) // P1.03
#define D3 (3ul) // P1.04
#define D4 (4ul) // P1.05
#define D5 (5ul) // P1.06
#define D6 (6ul) // P1.07
#define D7 (7ul) // P1.08

#define D8 (8ul) // P1.10
#define D9 (9ul) // P1.11
#define D10 (10ul) // P1.12
#define D11 (11ul) // P1.13
#define D12 (12ul) // P1.14
#define D13 (13ul) // P1.15

#define D20 (20ul) // P0.26
#define D21 (21ul) // P0.27


// These are the analog pins as digital pins
#define D14 (14ul) // P0.03
#define D15 (15ul) // P0.04
#define D16 (16ul) // P0.28
#define D17 (17ul) // P0.29
#define D18 (18ul) // P0.30
#define D19 (19ul) // P0.31

/*
 * Macros for nRF pin numbers for compatibility
 */
#define P1_01 D0
#define P1_02 D1
#define P1_03 D2
#define P1_04 D3
#define P1_05 D4
#define P1_06 D5
#define P1_07 D6
#define P1_08 D7
#define P1_09 D8
#define P1_10 D9
#define P1_11 D10
#define P1_12 D11
#define P1_13 D12
#define P1_14 D13

#define P0_29 D15
#define P0_31 D16
#define P0_30 D17
#define P1_04 D18
#define P1_02 D19
#define P1_00 D20
#define P0_22 D21


/*
 * Analog pins
 */
#define PIN_A0               (14) // P0.28/AIN4
#define PIN_A1               (15) // P0.03/AIN1
#define PIN_A2               (16) // P0.02/AIN0
#define PIN_A3               (17) // P0.29/AIN5
#define PIN_A4               (18) // P0.31/AIN7
#define PIN_A5               (19) // P0.30/AIN6

static const uint8_t A0  = PIN_A0 ;
static const uint8_t A1  = PIN_A1 ;
static const uint8_t A2  = PIN_A2 ;
static const uint8_t A3  = PIN_A3 ;
static const uint8_t A4  = PIN_A4 ;
static const uint8_t A5  = PIN_A5 ;
#define ADC_RESOLUTION    12

/*
 * Other pins
 */
#define PIN_NFC1             (7) // P0.09 (D7)
#define PIN_NFC2             (8) // P0.10 (D8)

/*
 * Serial interfaces
 */
#define PIN_SERIAL1_TX       (0) // P0.06 - also D0
#define PIN_SERIAL1_RX       (1) // P0.08 - also D1

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 0

#define PIN_SPI_SCK          (2) // P0.15 - D2
#define PIN_SPI_MISO         (3) // P0.17 - D3
#define PIN_SPI_MOSI         (4) // P0.20 - D4

static const uint8_t SS   = (9); // P1.06 - D9
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

#define PIN_SPI1_SCK          (18) // P1.04 - D18
#define PIN_SPI1_MISO         (19) // P1.02 - D19
#define PIN_SPI1_MOSI         (20) // P1.00 - D20

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 0

#define PIN_WIRE_SDA         (5) // P0.13 - D5
#define PIN_WIRE_SCL         (6) // P0.24 - D6

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#define PIN_WIRE1_SDA        (22) // P0.07 - D22
#define PIN_WIRE1_SCL        (23) // P0.12 - D23

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
