#include "main.h"
#include<stdio.h>

/**
 * binary_to_unit - convert inary numbers to unsigned int
 * @b : char string
 * Return: convert decimal number to 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int m, p;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
	}

	for (p = 1, m = 0, len--; len >= 0; len--, p *= 2)
	{
		if (b[len] == '1')
			m += p;
	}
	return (m);
}
