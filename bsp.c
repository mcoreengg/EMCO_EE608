
#include "bsp.h"
#include "mcc_generated_files/system/system.h"

void user_tmr0_func(void)
{
	RL1_Toggle();
}