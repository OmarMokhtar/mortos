/*!
 *  \file	pin.h
 *  \brief	Declaration of Pin class
 *  \author	Omar Mokhtar
 *  \date	22 Febuary 2014
 */

#ifndef PIN_H
#define PIN_H

#include <dio.h>
#include <pinconfig.h>

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
	 *  \enum	PinMode
	 *  \brief	Either the pin is configured as Input or Output
	 */
	enum PinMode
	{
		PIN_IN,
		PIN_OUT
	};

	/*!
	 *  \class	Pin
	 *  \brief	Accessing the Digital IO Pins
	 */
	class Pin
	{
		public:
			/*!
			 *  \brief	A Constructor
			 *  \param[in]	pin	The pin id
			 *  \return	Nothing
			 */
			Pin(PinId pin);

			/*!
			 *  \brief	A Constructor that sets the pin either in or out
			 *  \param[in]	pin	The pin id
			 *  \param[in]	mode	The pin mode (In or Out)
			 *  \return	Nothing
			 */
			Pin(PinId pin, PinMode mode);

			/*!
			 *  \brief	The destructor
			 *  \return	Nothing
			 */
			~Pin();
			
			/*!
			 *  \brief	Get the mode of the pin
			 *  \return	PinMode	The mode of the pin (in or out)
			 */
			PinMode getPinMode();

			/*!
			 *  \brief	Set the mode of the pin
			 *  \param[in]	mode	The mode of the pin (in or out)
			 *  \return	Nothing
			 */
			void setPinMode(PinMode);
			
			/*!
			 *  \brief	Output data to the pin
			 *  \param[in]	bit	The value of the pin
			 *  \return	Nothing
			 */
			void set(bool bit);

			/*!
			 *  \brief	Input data from the pin
			 *  \return	bool The value of the pin
			 */
			bool get();

		private:
			
			/*!
			 *  \brief	The pin id used in this object
			 */
			PinId m_pin_id;

		protected:
			
	};

}

/*!
 *	@}
 *  @}
 */

#endif
