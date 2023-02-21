#include "main.h"

/**
 * main-entry point
 * prints alphabets is lowercase,
 * followed by a new line
 * return 0
 */
void print_alphabet(void)
{
	int j;

	for (j = 'a', j <= 'z', j++)
	{
		_putchar(j);
	}
	putchar('\n');
}
