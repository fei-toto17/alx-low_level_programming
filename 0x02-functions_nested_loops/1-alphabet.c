#include "main.h"
/**
 * main-entry point
 * prints alphabets is lowercase,
 * followed by a new line
 * return 0
 */
void print_alphabet(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar("\n");
}
