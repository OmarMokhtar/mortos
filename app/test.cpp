#include <mem.h>

#include <pin.h>

using namespace dio;

int main()
{

	*DDRH = 0xFF;
	
	while (1)
	{

		*PORTH = 0xFF;

		for (uint32 i = 0 ; i < 0x4FFF ; i++);
		
		*PORTH = 0x00;

		for (uint32 i = 0 ; i < 0x4FFF ; i++);
	}

	return 0;
}
