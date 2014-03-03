/*!
 *  \file	twi.h
 *  \brief	Two Wire Serial Interface Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef TWI_H
#define TWI_H

#include <reg.h>

/*!
 *  \defgroup	TWIMCAL	TWI
 *  \brief	The abstraction of the registers addresses of the two wire serial interface
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup TWIMCAL
 *	@{
 */

/*!
 *  \def        TWCR
 *  \brief      Two Wire Serial Interface Control Register
 */
#define TWCR	REG(0x56)

/*!
 *  \def        TWDR
 *  \brief      Two Wire Serial Interface Data Register
 */
#define	TWDR	REG(0x23)

/*!
 *  \def        TWAR
 *  \brief      Two Wire Serial Interface Slave Address Data Register
 */
#define TWAR	REG(0x22)

/*!
 *  \def        TWSR
 *  \brief      Two Wire Serial Interface Status Register
 */
#define TWSR	REG(0x21)

/*!
 *  \def        TWBR
 *  \brief      Two Wire Serial Interface Control Register
 */
#define TWBR	REG(0x20)

/*!
 *	@}
 *  @}
 */

#endif
