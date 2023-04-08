#include "main.h"
#include <stdio.h>

/**
 * print binary - printing binary representation oa numbers
 * @n: provided number to print as binary
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);

	_putchar((n & 1) + '0');
}
