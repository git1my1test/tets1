#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"
#include "tm1637.h"
#include "lib_test.h"
#include "brown_delay.h"

static __IO uint8_t state = 0;
//static __IO uint8_t REAL_State = 0;



int main() {
    
    init_display();
    state = ask_for_ext_input();
    while(1) {
           universal_FSM_prosedure();
           display_state();
           delay_from_Brown(300);
        
	}
}
