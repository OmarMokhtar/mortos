/*!
 *  \file	mcu.h
 *  \brief	Micro-Controller Controlling Registers Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef MCU_H
#define MCU_H

#include <reg.h>

/*!
 *  \defgroup	MCUMCAL	MCU
 *  \brief	The abstraction of the registers addresses of the controlling registers
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup MCUMCAL
 *	@{
 */

/*!
 *  \def	SREG
 *  \brief	Status Register
 */
#define SREG	REG(0x5F)

/*!
 *  \def	SPH
 *  \brief	Stack Pointer Higher 8 bits
 */
#define SPH	REG(0x5E)

/*!
 *  \def	SPL
 *  \brief	Stack Pointer Lower 8 bits
 */
#define SPL	REG(0x5D)

/*!
 *  \def        SPMCR
 *  \brief	Store Program Memory Control Register
 */
#define SPMCR	REG(0x57)

/*!
 *  \def	MCUCR
 *  \brief      Micro Controller Control Register (Like sleeping, power saving, ... etc)
 */
#define MCUCR	REG(0x55)

/*!
 *  \def        MCUCSR
 *  \brief      Micro Controller Control and Status Register (Tells which source caused a reset)
 */
#define MCUCSR	REG(0x54)

/*!
 *  \def	OSCCAL
 *  \brief	Oscillator Calibration Register (Choosing the clock source)
 */
#define OSCCAL	REG(0x51)

/*!
 *	@}
 *  @}
 */

#endif
