#include "main.h"
#include <string.h>

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: int length of the string
 */

int _strlen(char *s)
{
	int length;

	for(; *s != '\0'; s++)
	{
		length += 1;
	}
	return (strlen(s));
}
