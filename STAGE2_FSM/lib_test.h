#ifndef LIB_TEST_H
#define LIB_TEST_H

#include "stm32f10x.h"


#define STATE_INIT 0 
#define STATE_1 1
#define STATE_2 2
#define STATE_3 3
#define STATE_4 4
#define STATE_5 5 
#define STATE_6 6
#define STATE_7 7
#define STATE_8 8
#define STATE_9 9



void init_display(void);
void display_state(void);
void reset_a(void);
uint8_t state_change(void);
uint8_t ask_for_ext_input(void);
void universal_FSM_prosedure(void);
#endif 

