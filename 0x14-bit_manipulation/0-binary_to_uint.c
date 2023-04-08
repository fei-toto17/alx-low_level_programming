#include "main.h"
#include <stdio.h>

/**
 * binary_to_unit - convert inary numbers to unsigned int
 * @b : char string
 * Return: convert decimal number to 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int len = 0;

	if (b[len] == '\0')
		return (0);

	while ((b[len] == '0') || (b[len] == '1'))
	{
		num <<= 1;
		num += b[len] - '0';
		len++;
	}

	return (num);
}
