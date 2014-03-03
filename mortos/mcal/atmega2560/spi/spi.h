/*!
 *  \file	spi.h
 *  \brief	Serial Peripheral Interface Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef SPI_H
#define SPI_H

#include <reg.h>

/*!
 *  \defgroup	SPIMCAL	SPI
 *  \brief	The abstraction of the registers addresses of the serial peripheral interface
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *  	\addtogroup	SPIMCAL
 * 	 @{
 */

/*!
 *  \def        SPDR
 *  \brief      SPI Data Register
 */
#define SPDR	REG(0x2F)

/*!
 *  \def        SPSR
 *  \brief      SPI Status Register
 */
#define SPSR	REG(0x2E)

/*!
 *  \def        SPCR
 *  \brief      SPI Control Register
 */
#define SPCR	REG(0x2D)

/*!
 *	@}
 *  @}
 */

#endif
