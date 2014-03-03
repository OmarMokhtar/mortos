/*!
 *  \file	ac.h
 *  \brief	Analog Comparator Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef AC_H
#define AC_H

#include <reg.h>

/*!
 *  \defgroup	ACMCAL	Analog Comparator
 *  \brief	The abstraction of the registers addresses of the analog comparators
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup ACMCAL
 *	@{
 */

/*!
 *  \def        ACSR
 *  \brief      Analog Comparator Control and Status Register
 */
#define ACSR	REG(0x28)

/*!
 *	@}
 *  @}
 */

#endif
