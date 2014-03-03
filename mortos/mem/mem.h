/*!
 *  \file	mem.h
 *  \brief	Declaration of new and delete overloading operators
 *  \author	Omar Mokhtar
 *  \date	21 Febuary 2014
 */

#ifndef MEM_H
#define MEM_H

#include <types.h>

/*!
 *  \defgroup	MEM	Memory Alloc
 *  \brief	Overloading the operators that allocated and deallocated memory dynamically
 */

/*!
 *  \addtogroup	MEM
 *  @{
 */

/*!
 *  \brief	Overloading the new operator that dynamically allocates a certain size of data
 *  \param[in]	size	The size of the data that will be allocated
 *  \return	void*	The pointer to the allocated data in case of success or null otherwise
 */
void* operator new(size_t size);

/*!
 *  \brief      Overloading the delete operator that deallocated a certain address in the memory
 *  \param[in]  ptr	The address of the part that will be deallocated
 *  \return     void
 */
void operator delete(void* ptr);

/*!
 * @}
 */

#endif
