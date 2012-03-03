/************************************************************************/
/*  Title       : watchdog.cpp                                        */
/*                                                                      */
/*  Class       : ELE-542                                               */  
/*                                                                      */
/*  Written by  : Joel Bourbonnais & Olivier Mass�                      */
/*	                                                                    */
/*  Summary     : Contains the init and loop for the normal mode        */
/*                                                                      */
/************************************************************************/

#include <singleton.h>
#include "watchdog.h"


watchdog::watchdog()
{
	WDTCR = ( 1<< WDE)  // Watchdog Enabled
	        | (1<<WDP2) // WDP are used to set the period of the watchdog timer-> 1s
			    | (1<<WDP1)
			    | (0<<WDP0);
}

void watchdog::reset()
{
	WDTCR = (0<<WDE); //Watchdog Disabled and counter will be reset next time it'll be enable
}