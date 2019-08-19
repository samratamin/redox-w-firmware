
#define HAND_SENSE 12
#define RIGHT_HAND false
#define NUM_PAD false
#define LEFT_HAND true

#define ALPHA_SENSE 20
#define ALPABETICAL false

// left hand pins

#define L_C01 10
#define L_C02 9
#define L_C03 7
#define L_C04 6
#define L_C05 5
#define L_C06 4
#define L_C07 3
#define L_R01 19
#define L_R02 18
#define L_R03 17
#define L_R04 14
#define L_R05 13

// right hand pins

#define R_C01 6
#define R_C02 5
#define R_C03 4
#define R_C04 3
#define R_C05 2
#define R_C06 0
#define R_C07 30
#define R_R01 21
#define R_R02 22
#define R_R03 23
#define R_R04 28
#define R_R05 29

// Numpad pins

#define N_C01 10
#define N_C02 9
#define N_C03 7
#define N_C04 6
#define N_C05 5
#define N_C06 4
#define N_C07 3
#define N_R01 19
#define N_R02 18
#define N_R03 17
#define N_R04 14
#define N_R05 13


#ifdef COMPILE_LEFT

#define PIPE_NUMBER 0

#define C01 L_C01
#define C02 L_C02
#define C03 L_C03
#define C04 L_C04
#define C05 L_C05
#define C06 L_C06
#define C07 L_C07
#define R01 L_R01
#define R02 L_R02
#define R03 L_R03
#define R04 L_R04
#define R05 L_R05

#endif

#ifdef COMPILE_RIGHT

#define PIPE_NUMBER 1

#define C01 R_C01
#define C02 R_C02
#define C03 R_C03
#define C04 R_C04
#define C05 R_C05
#define C06 R_C06
#define C07 R_C07
#define R01 R_R01
#define R02 R_R02
#define R03 R_R03
#define R04 R_R04
#define R05 R_R05

#endif

#ifdef COMPILE_NUM

#define PIPE_NUMBER 2

#define C01 N_C01
#define C02 N_C02
#define C03 N_C03
#define C04 N_C04
#define C05 N_C05
#define C06 N_C06
#define C07 N_C07
#define R01 N_R01
#define R02 N_R02
#define R03 N_R03
#define R04 N_R04
#define R05 N_R05

#endif



#define COLUMNS 7
#define ROWS 5

// Low frequency clock source to be used by the SoftDevice
#define NRF_CLOCK_LFCLKSRC      {.source        = NRF_CLOCK_LF_SRC_XTAL,            \
                                 .rc_ctiv       = 0,                                \
                                 .rc_temp_ctiv  = 0,                                \
                                 .xtal_accuracy = NRF_CLOCK_LF_XTAL_ACCURACY_20_PPM}
