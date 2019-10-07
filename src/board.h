#ifndef BOARD_H_
#define BOARD_H_

#define PIRA 

#ifdef VER2_2
    #define PIN_REED PH0
    #define GPS_EN PB14
    #define LIGHT_EN PB15
    #define BAN_MON_EN PB12
    #define BAN_MON PA4
    #define GPS_BCK PA8
    #define PIN_ADC PA5
    #define LED_RED PA0
    #define A_INT1 PB2
    #define A_INT2 PB7
    #define VSWR_EN PB13
    #define VSWR_ADC PA3
#endif

#ifdef VER2_1
    #define PIN_REED PA11
    #define GPS_EN PB14
    #define LIGHT_EN PB13
    #define BAN_MON_EN PB12
    #define BAN_MON PA4
    #define GPS_BCK PA8
    #define PIN_ADC PA5
    #define LED_RED PA0
    #define A_INT1 PB5
    #define A_INT2 PB6
    #define VSWR_EN -1
    #define VSWR_ADC -1
#endif

#ifdef PIRA
    #define PIN_REED PA11
    #define GPS_EN PB14
    #define LIGHT_EN -1
    #define BAN_MON_EN PB12
    #define BAN_MON PA4
    #define GPS_BCK -1
    #define PIN_ADC PA5
    #define LED_RED PA0
    #define A_INT1 PB5
    #define A_INT2 -1
    #define VSWR_EN -1
    #define VSWR_ADC -1
    #define POWER_ENABLE_5V     (PB6)
    #define FET_OUTPUT          (PA8)
    #define RASPBERRY_PI_STATUS (PB13)
    #define BATTERY_VOLTAGE     (STM32L0_ADC_CHANNEL_5)
#endif

#endif
