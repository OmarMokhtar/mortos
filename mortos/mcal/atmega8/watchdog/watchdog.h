/*!
 *  \file	watchdog.h
 *  \brief	Watch Dog Micro-Controller Abstraction Layer Of ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef WATCHDOG_H
#define WATCHDOG_H

#include <reg.h>

/*!
 *  \defgroup	WATCHDOGMCAL	Watch Dog Timer
 *  \brief	The abstraction of the registers addresses of the watch dog timer
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup WATCHDOGMCAL
 *	@{
 */

/*!
 *  \def        WDTCR
 *  \brief      Watch Dog Timer Control Register
 */
#define WDTCR	REG(0x41)

/*!
 *	@}
 *  @}
 */

#endif
