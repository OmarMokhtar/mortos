/*!
 *  \file	timer.h
 *  \brief	Timer Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef TIMER_H
#define TIMER_H

#include <reg.h>

/*!
 *  \defgroup	TIMERMCAL	Timer
 *  \brief	The abstraction of the registers addresses of the timers
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup TIMERMCAL
 *	@{
 */

/*!
 *  \def        TIMSK
 *  \brief      Timer Interrupt Mask Register
 */
#define TIMSK	REG(0x59)

/*!
 *  \def        TIFR
 *  \brief      Timer Interrupt Flag Register
 */
#define TIFR	REG(0x58)

/*!
 *  \def        TCCR0
 *  \brief      Timer 0 Control Register
 */
#define TCCR0	REG(0x53)

/*!
 *  \def        TCNT0
 *  \brief      Timer 0 Counter Register
 */
#define TCNT0	REG(0x52)

/*!
 *  \def        TCCR1A
 *  \brief      Timer 1 First Control Register
 */
#define TCCR1A	REG(0x4F)

/*!
 *  \def        TCCR1B
 *  \brief      Timer 1 Second Control Register
 */
#define TCCR1B	REG(0x4E)

/*!
 *  \def        TCNT1H
 *  \brief      Timer 1 Counter Register Higher 8 bits
 */
#define TCNT1H	REG(0x4D)

/*!
 *  \def        TCNT1L
 *  \brief      Timer 1 Counter Register Lower 8 bits
 */
#define TCNT1L	REG(0x4C)

/*!
 *  \def        OCR1AH
 *  \brief      Timer 1 First Compare Register Higher 8 bits
 */
#define OCR1AH	REG(0x4B)

/*!
 *  \def        OCR1AL
 *  \brief      Timer 1 First Compare Register Lower 8 bits
 */
#define OCR1AL	REG(0x4A)

/*!
 *  \def        OCR1BH
 *  \brief      Timer 1 Second Compare Register Higher 8 bits
 */
#define OCR1BH	REG(0x49)

/*!
 *  \def        OCR1BL
 *  \brief      Timer 1 Second Compare Register Lower 8 bits
 */
#define OCR1BL	REG(0x48)

/*!
 *  \def        ICR1H
 *  \brief      Timer 1 Input Capture Register Higher 8 bits
 */
#define ICR1H	REG(0x47)

/*!
 *  \def        ICR1L
 *  \brief      Timer 1 Input Capture Register Lower 8 bits
 */
#define ICR1L	REG(0x46)

/*!
 *  \def        TCCR2
 *  \brief      Timer 2 Control Register
 */
#define TCCR2	REG(0x45)

/*!
 *  \def        TCNT2
 *  \brief      Timer 2 Counter Register
 */
#define TCNT2	REG(0x44)

/*!
 *  \def        OCR2
 *  \brief      Timer 2 Output Compare Register
 */
#define OCR2	REG(0x43)

/*!
 *  \def        ASSR
 *  \brief      Timer 2 Asynchronous Status Register
 */
#define ASSR	REG(0x42)

/*!
 *	@}
 *  @}
 */

#endif
