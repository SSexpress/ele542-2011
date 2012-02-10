/************************************************************************/
/*  Title       : Main.cpp                                              */
/*                                                                      */
/*  Class       : ELE-542                                               */  
/*                                                                      */
/*  Written by  : Joel Bourbonnais & Olivier Mass�                      */
/*	                                                                    */
/*  Summary     : Contains the main() executed at first by the �C       */
/*                                                                      */
/************************************************************************/

#include <singleton.h>
Singleton s;

#include <modes/all_modes.h>

NormalMode mode;

#include "init/initcore.h"

int main() {
	sei();


	mode.init();
	while (1) {
		mode.loop();
	}
	
		
}

