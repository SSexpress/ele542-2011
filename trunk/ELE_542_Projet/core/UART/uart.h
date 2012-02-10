/************************************************************************/
/*  Title       : uart.h                                                */
/*                                                                      */
/*  Class       : ELE-542                                               */  
/*                                                                      */
/*  Written by  : Joel Bourbonnais & Olivier Mass�                      */
/*	                                                                    */
/*  Summary     : Class that creates the Uart of the �C                 */
/*                                                                      */
/************************************************************************/


#ifndef UART_H_
#define UART_H_

#include <avr/io.h>
#include <avr/interrupt.h>
#include "buffer_RX.h"
#include "buffer_TX.h"

extern "C" void __vector_13(); // ISR(USART_RXC_vect)
extern "C" void __vector_15(); // ISR(USART_RXC_vect)

class Uart
{
	
private:
	// Interrupt for the USART_RXC_vect
	friend void __vector_13();
	friend void __vector_15();
	volatile uint8_t wReceivedByte;
	
public:
  // Constructor
  Uart();
  Buffer_Reception  RX_Buffer;
  Buffer_Envoi      TX_Buffer;
  
  // Transmit byte
  void uart_loopback(uint8_t iByte);

};

#endif /* UART_H_ */