/************************************************************************/
/*  Title       : initcore.h                                            */
/*                                                                      */
/*  Class       : ELE-542                                               */  
/*                                                                      */
/*  Written by  : Joel Bourbonnais & Olivier Mass�                      */
/*	                                                                    */
/*  Summary     : Inits all the core systems used in modes              */
/*                                                                      */
/************************************************************************/


#ifndef INITCORE_H_
#define INITCORE_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "core/UART/uart.h"
#include "core/Timer/timer1.h"
#include "core/Controle/moteur.h"
//#include "core/PIN/pin.h"

class CoreInit
{

public:
	CoreInit();

public:	
	uart Uart;
	timer1 Timer1;
	moteur Moteur;
	
	//pin DIR_G1;
	//pin DIR_G2;
	//pin DIR_D1;
	//pin DIR_D2;
		
};

#endif /* INITCORE_H_ */