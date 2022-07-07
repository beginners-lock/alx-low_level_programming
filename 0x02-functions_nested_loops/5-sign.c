#include "main.h"

/**
 * print_sign - Entry function
 * @i: number as int
 * Description: prints the sign of the number
 * Return: 1 if i is > zero, 0 if i is zero, -1 if i is < zero
 */

int print_sign(int i)
{
	if (i > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (i < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
