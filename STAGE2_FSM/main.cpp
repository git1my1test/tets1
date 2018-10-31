#include "stm32f10x_gpio.h"
#include "stm32f10x_rcc.h"

#include "lib_test.h"


uint8_t state = 0;
uint8_t state1 = 0;

class Test__{

};


int main() {
    
    init_display();
    
    while(1) {
    
		state = ask_for_ext_input();
        universal_FSM_prosedure(state);
	}
}
