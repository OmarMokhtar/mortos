/*!
 *  \file	interrupt.h
 *  \brief	Interrupts Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef INTERRUPT_H
#define INTERRUPT_H

#include <reg.h>

/*!
 *  \defgroup	INTERRUPTMCAL	Interrupt
 *  \brief	The abstraction of the registers addresses of Interrupts
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup INTERRUPTMCAL
 *	@{
 */

/*!
 *  \def        GICR
 *  \brief      General Interrupt Control Register
 */
#define GICR	REG(0x5B)

/*!
 *  \def        GIFR
 *  \brief      General Interrupt Flag Register
 */
#define GIFR	REG(0x5A)

/*!
 *	@}
 *  @}
 */

#endif
