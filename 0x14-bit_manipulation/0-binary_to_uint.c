#include "main.h"
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;

	for (uint = 0; *b; b++)
	{
		if (*b == '1')
		{
			uint = (uint << 1) | 1;
		} else if (uint == '0')
		{
			uint = uint << 1;
		} else
		{
			break;
		}
	}
	return (uint);
}
