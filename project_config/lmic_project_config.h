// project-specific definitions
#define CFG_eu868 1
//#define CFG_us915 1
//#define CFG_au915 1
//#define CFG_as923 1
// #define LMIC_COUNTRY_CODE LMIC_COUNTRY_CODE_JP      /* for as923-JP; also define CFG_as923 */
//#define CFG_kr920 1
//#define CFG_in866 1
#define CFG_sx1276_radio 1
//#define LMIC_USE_INTERRUPTS
# define LMIC_MAX_FRAME_LENGTH 64
// Class A
//#define DISABLE_MCMD_DutyCycleReq // duty cycle cap
//#define DISABLE_MCMD_RXParamSetupReq // 2nd DN window param
//#define DISABLE_MCMD_NewChannelReq // set new channel
//#define DISABLE_MCMD_DlChannelReq // set downlink channel for RX1 for given uplink channel.
//#define DISABLE_MCMD_RXTimingSetupReq // delay between TX and RX
#define DISABLE_JOIN
#define LMIC_LORAWAN_SPEC_VERSION   LMIC_LORAWAN_SPEC_VERSION_1_0_2