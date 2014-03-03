/*!
 *  \file	dio.h
 *  \brief	Digital Input/Output Pins Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef DIO_H
#define DIO_H

#include <reg.h>

/*!
 *  \defgroup	DIOMCAL	DIO
 *  \brief	The abstraction of the registers addresses of the Digital IO Pins
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup DIOMCAL
 *	@{
 */

/*!
 *  \def        PORTB
 *  \brief      Output Register of Port B
 */
#define PORTB	REG(0x38)

/*!
 *  \def        DDRB
 *  \brief	Data Direction Register of Port B
 */
#define DDRB	REG(0x37)

/*!
 *  \def	PINB
 *  \brief      Input Register of Port B
 */
#define PINB	REG(0x36)

/*!
 *  \def        PORTC
 *  \brief      Output Register of Port C
 */
#define PORTC	REG(0x35)

/*!
 *  \def        DDRC
 *  \brief      Data Direction Register of Port C
 */
#define DDRC	REG(0x34)

/*!
 *  \def        PINC
 *  \brief      Input Register of Port C
 */
#define PINC	REG(0x33)

/*!
 *  \def	PORTD
 *  \brief      Output Register of Port D
 */
#define PORTD	REG(0x32)

/*!
 *  \def        DDRD
 *  \brief      Data Direction Register of Port D
 */
#define DDRD	REG(0x31)

/*!
 *  \def        PIND
 *  \brief      Input Register of Port D
 */
#define PIND	REG(0x30)

/*!
 *  \def        SFIOR
 *  \brief      Special Functions IO Register (For configuring some pins as SPI, ADC, ... etc)
 */
#define SFIOR	REG(0x50)

/*!
 *	@}
 *  @}
 */

#endif
