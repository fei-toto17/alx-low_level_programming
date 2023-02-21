#include "main.h"

/**
 * _abs - Entry point
 * @r: r is an integer
 * Description: prints the absolute value of an integer
 * Return: int
 */

int _abs(int r)
{
	if (r > 0)
	{
		return (r);
	}
	else if (r < 0)
	{
		return (-r);
	}
	else
	{
		return (r);
	}
}
