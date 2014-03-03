/*!
 *  \file	pinconfig.h
 *  \brief	Project dependant pin configuration
 *  \author	Omar Mokhtar
 *  \date	22 Febuary 2014
 */

#ifndef PINCONFIG_H
#define PINCONFIG_H

#include <dio.h>

/*!
 *  \addtogroup	MCAL
 *  @{
 *	\addtogroup DIOMCAL
 *	@{
 */

/*!
 *  \namespace	dio
 *  \brief	Accessing the Digital IO Pins
 */
namespace dio
{

	/*!
	 *  \enum	PinId
	 *  \brief	Project Dependant Pin Assignments
	 */
	enum PinId
	{
		PIN_PB4 = 0,
		PIN_PB5 = 1,
		PIN_PC2 = 2,
	};

	/*!
	 *  \struct	PinData
	 *  \brief	The hardware dependant and project dependant data
	 */
	typedef struct
	{
		RegPtr	outReg; /*!< Pointer to the output register */
		RegPtr	inReg; /*!< Pointer to the input register */
		RegPtr	dirReg; /*!< Pointer to the data direction */
		uint8	pinNumberReg; /*!< The index of the pin in the register */
	} PinData;

	/*!
	 *  \var	g_pins_data
	 *  \brief	The pin configurations hardware dependant array
	 */
	extern PinData g_pins_data[];

}

/*!
 *	@}
 *  @}
 */

#endif
