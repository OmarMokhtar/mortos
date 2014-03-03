/*!
 *  \file       pin.cpp
 *  \brief      Implementation of Pin class that accesses the Digital IO pins
 *  \author     Omar Mokhtar
 *  \date       23 Febuary 2014
 */

#include <pin.h>

namespace dio {

/*!
 *  \brief      A Constructor
 *  \param[in]  pin The pin id
 *  \return     Nothing
 */
Pin::Pin(PinId pin)
{
	m_pin_id = pin;
	SET_REG(SFIOR,0);
}

/*!
 *  \brief      A Constructor that sets the pin either in or out
 *  \param[in]  pin The pin id
 *  \param[in]  mode The pin mode (In or Out)
 *  \return     Nothing
 */
Pin::Pin(PinId pin, PinMode mode)
{
	m_pin_id = pin;
	setPinMode(mode);
}

/*!
 *  \brief      The destructor
 *  \return     Nothing
 */
Pin::~Pin()
{
	
}

/*!
 *  \brief      Get the mode of the pin
 *  \return     PinMode	The mode of the pin (in or out)
 */
PinMode Pin::getPinMode()
{
	bool out = GET_PIN(g_pins_data[m_pin_id].dirReg,g_pins_data[m_pin_id].pinNumberReg);
	if (out)
	{
		return PIN_OUT;
	}
	else
	{
		return PIN_IN;
	}
}

/*!
 *  \brief      Set the mode of the pin
 *  \param[in]  mode The mode of the pin (in or out)
 *  \return     Nothing
 */
void Pin::setPinMode(PinMode mode)
{
	if (mode == PIN_OUT)
	{
		SET_PIN_HIGH(g_pins_data[m_pin_id].dirReg,g_pins_data[m_pin_id].pinNumberReg);
	}
	else
	{
		SET_PIN_LOW(g_pins_data[m_pin_id].dirReg,g_pins_data[m_pin_id].pinNumberReg);
	}
}

/*!
 *  \brief      Output data to the pin
 *  \param[in]  bit The value of the pin
 *  \return     Nothing
 */
void Pin::set(bool bit)
{
	if (bit == true)
	{
		SET_PIN_HIGH(g_pins_data[m_pin_id].outReg,g_pins_data[m_pin_id].pinNumberReg);
	}
	else
	{
		SET_PIN_LOW(g_pins_data[m_pin_id].outReg,g_pins_data[m_pin_id].pinNumberReg);
	}
}

/*!
 *  \brief	Input data from the pin
 *  \return	bool The value of the pin
 */
bool Pin::get()
{
	return (GET_PIN(g_pins_data[m_pin_id].inReg,g_pins_data[m_pin_id].pinNumberReg) != 0);
}

}
