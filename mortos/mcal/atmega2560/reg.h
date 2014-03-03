/*!
 *  \file	reg.h
 *  \brief	General register operations in ATMEGA8
 *  \author	Omar Mokhtar
 *  \date	22 Febuary 2014
 */

#ifndef REG_H
#define REG_H

#include <types.h>

/*!
 *  \defgroup	MCAL	MCAL
 *  \brief	The abstraction of the registers addresses
 */

/*!
 *  \addtogroup	MCAL
 *  @{
 */

/*!
 *  \def        REG
 *  \param	a	The address of the register
 *  \brief	Using a register as a pointer that carries its address
 */
#define REG(a)	((volatile uint8*)a)

/*!
 *  \def        SET_PIN_HIGH
 *  \brief      Setting a certain pin in the port with 1
 *  \param[in]  port    The port register
 *  \param[in]  bit     The pin number in the port (from 0 to 7)
 */
#define SET_PIN_HIGH(port,bit)  *port |= (1 << bit)

/*!
 *  \def        SET_PIN_LOW
 *  \brief      Setting a certain pin in the port with 1
 *  \param[in]  port    The port register
 *  \param[in]  bit     The pin number in the port (from 0 to 7)
 */
#define SET_PIN_LOW(port,bit)   *port &= !(1 << bit)

/*!
 *  \def        GET_PIN
 *  \brief      Getting the value read at a certain pin in a certain port
 *  \param[in]  port    The port register
 *  \param[in]  bit     The pin number in the port (from 0 to 7)
 */
#define GET_PIN(port,bit)       ((*port) & (1 << bit))

/*!
 *  \def	SET_REG
 *  \brief	Set the whole 8 bits register with a value
 *  \param[in]	addr	The register
 *  \param[in]	value	The value that the register will be set with
 */
#define SET_REG(addr,value)	(*addr = value)

/*!
 *  \def	GET_REG
 *  \brief	Get the value of the whole 8 bits register
 *  \param[in]	addr	The register
 */
#define GET_REG(addr)		(*addr)

/*!
 *  \typedef	RegPtr
 *  \brief	A type that is a pointer to a register
 */
typedef volatile uint8*	RegPtr;

/*!
 *  @}
 */

#endif
