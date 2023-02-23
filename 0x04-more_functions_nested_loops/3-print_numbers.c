#include "main.h"

/**
 * print_numbers - print  0 - 9
 *
 * Return: void
 */

void print_numbers(void)
{
	char x = 0;

	while (x <= 9)
	{
		_putchar(x + '0');
		x++;
	}
	_putchar('\n');
}
