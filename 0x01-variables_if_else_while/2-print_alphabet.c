#include <stdio.h>
#include <unistd.h>
/**
 * main entry point
 * a program to print lowercase alphabets
 * return= zero(success) always
 */

int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('/n');
return (0);
}
