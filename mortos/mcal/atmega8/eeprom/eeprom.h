/*!
 *  \file	eeprom.h
 *  \brief	EEPROM Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef EEPROM_H
#define EEPROM_H

#include <reg.h>

/*!
 *  \defgroup	EEPROMMCAL	EEPROM
 *  \brief	The abstraction of the registers addresses of EEPROM
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup EEPROMMCAL
 *	@{
 */

/*!
 *  \def        EEARH
 *  \brief      EEPROM Address Register Higher 8 bits
 */
#define EEARH	REG(0x3F)

/*!
 *  \def        EEARL
 *  \brief      EEPROM Address Register Lower 8 bits
 */
#define EEARL	REG(0x3E)

/*!
 *  \def        EEDR
 *  \brief      EEPROM Data Register
 */
#define EEDR	REG(0x3D)

/*!
 *  \def        EECR
 *  \brief      EEPROM Control Register
 */
#define EECR	REG(0x3C)

/*!
 *	@}
 *  @}
 */

#endif
