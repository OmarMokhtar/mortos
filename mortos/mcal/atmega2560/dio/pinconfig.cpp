/*!
 *  \file       pinconfig.cpp
 *  \brief      Project dependant file the contains the pin configurations
 *  \author     Omar Mokhtar
 *  \date       23 Febuary 2014
 */

#include <pinconfig.h>

namespace dio {

        /*!
         *  \var        g_pins_data
         *  \brief      The pin configurations hardware dependant array
         */
	PinData g_pins_data[] =
	{
		{
			.outReg = PORTB,
			.inReg = PINB,
			.dirReg = DDRB,
			.pinNumberReg = 4,
		},
		{
			.outReg = PORTB,
			.inReg = PINB,
			.dirReg = DDRB,
			.pinNumberReg = 5,
		},
		{
			.outReg = PORTC,
			.inReg = PINC,
			.dirReg = DDRC,
			.pinNumberReg = 2,
		},
	};

}
