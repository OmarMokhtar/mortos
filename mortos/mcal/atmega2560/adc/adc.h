/*!
 *  \file	adc.h
 *  \brief	Analog to Digital Converter Micro-Controller Abstraction Layer
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef ADC_H
#define ADC_H

#include <reg.h>

/*!
 *  \defgroup	ADCMCAL	ADC
 *  \brief	The abstraction of the registers addresses of the analog to digital converter
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 *  	\addtogroup	ADCMCAL
 *  	@{
 */

/*!
 *  \def        ADMUX
 *  \brief      Analog to Digital Converter Multiplexer Register
 */
#define ADMUX	REG(0x27)

/*!
 *  \def        ADCSRA
 *  \brief      Analog to Digital Converter Control and Status Register
 */
#define ADCSRA	REG(0x26)

/*!
 *  \def	ADCH
 *  \brief      Analog to Digital Converter Data Register Higher 8 bits
 */
#define ADCH	REG(0x25)

/*!
 *  \def        ADCL
 *  \brief      Analog to Digital Converter Data Register Lower 8 bits
 */
#define	ADCL	REG(0x24)

/*!
 *	@}
 *  @}
 */

#endif
