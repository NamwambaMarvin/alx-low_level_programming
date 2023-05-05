#include "main.h"
/**
 * binary_to_uint - Converts binatry string to int
 * @b: Binary string to be converted
 * Return: unsigned int else 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;

	if (!b)
		return (0);
	for (uint = 0; *b; b++)
	{
		if (*b == '1')
		{
			uint = (uint << 1) | 1;
		}
		else if (*b == '0')
		{
			uint = uint << 1;
		}
		else
		{
			return (0);
		}
	}
	return (uint);
}
