/*!
 *  \file       mem.cpp
 *  \brief      Implementation of new and delete overloading operators
 *  \author     Omar Mokhtar
 *  \date       21 Febuary 2014
 */

#include <mem.h>

void* operator new(size_t size)
{
	return malloc(size);
}

void operator delete(void* ptr)
{
	free(ptr);
}
