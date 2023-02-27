#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length;

	while (*s != '\0')
	{
		length += 1;
		*s += 1;
	}
	return (length);
}
