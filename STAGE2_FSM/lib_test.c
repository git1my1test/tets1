#include "lib_test.h"

#include "stm32f10x_rcc.h"
#include "tm1637.h"
#include "brown_delay.h"


static __IO uint8_t REAL_State = 0;


void init_display(void){//
sys_tick_ini();    
TM1637_init();	
TM1637_brightness(BRIGHTEST);
}

void display_state(void){//
   TM1637_display_all(REAL_State);
}



void reset_a(void){

 }

uint8_t ask_for_ext_input(void) {// keypadGetKey()

	return STATE_INIT;
}

uint8_t state_change(void) {// keypadGetKey()

    REAL_State ++;
	return 0;
}
void universal_FSM_prosedure(void) {// 
	
    switch (REAL_State)  {
        case STATE_INIT: 
           //TM1637_display_all(REAL_State);
            state_change();
           break;
        case STATE_1: 
           // TM1637_display_all(REAL_State);
            state_change();
           break;
        case STATE_2:
           // TM1637_display_all(REAL_State);
            state_change();
            break;
        case STATE_3: 
           // TM1637_display_all(REAL_State);
            state_change();
            break;
        default:
            ;
    }
}



//void universal_FSM_prosedure(uint8_t state) {// 
//	
//    switch (state)  {
//        case STATE_INIT: 
//           break;
//        case STATE_1: 
//           break;
//        case STATE_2: 
//            break;
//        case STATE_3: 
//            break;
//        case STATE_4: 
//            break;        
//        case STATE_5: 
//            break;
//        case STATE_6: 
//            break;
//        case STATE_7: 
//            break;
//       case STATE_8: 
//            break;
//       case STATE_9: 
//            break;
//     
//        default:
//            ;
//    }
//}
