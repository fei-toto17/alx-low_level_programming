#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int x, y;
	int cap;

	if (b == NULL)
		return (0);

	for (cap = 0; b[cap]; cap++)
	{
		if (b[cap] != '0' && b[cap] != '1')
			return (0);
	}

	for (y = 1, x = 0, cap--; cap >= 0; cap--, y *= 2)
	{
		if (b[cap] == '1')
			x += y;
	}

	return (x);
}
