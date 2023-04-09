#include "main.h"
#include <stdio.h>

/**
 * get_endianness - Checks the endianness.
 *
 * Return: If big-endian - 0.
 *         If little-endian - 1.
 */
int get_endianness(void)
{
	int yoyo;

	yoyo = 1;
	if (*(char *) &yoyo == 1)
		return (1);
	else
		return (0);
}
