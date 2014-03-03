/*!
 *  \file	usart.h
 *  \brief	USART Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef USART_H
#define USART_H

#include <reg.h>

/*!
 *  \defgroup	USARTMCAL	USART
 *  \brief	The abstraction of the registers addresses of USART
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup USARTMCAL
 *	@{
 */

/*!
 *  \def        UBRRH
 *  \brief      USART Baud Rate Register Higher 8 bits
 */
#define UBRRH	REG(0x40)

/*!
 *  \def        UCSRC
 *  \brief      USART Control And Status Register
 */
#define UCSRC	REG(0x40)

/*!
 *  \def        UDR
 *  \brief      USART IO Data Register
 */
#define UDR	REG(0x2C)

/*!
 *  \def        UCSRA
 *  \brief      USART First Control and Status Register
 */
#define UCSRA	REG(0x2B)

/*!
 *  \def        UCSRB
 *  \brief      USART Second Control and Status Register
 */
#define UCSRB	REG(0x2A)

/*!
 *  \def        UBRRL
 *  \brief      USART Baud Rate Register Lower 8 bits
 */
#define UBRRL	REG(0x29)

/*!
 *	@}
 *  @}
 */

#endif
