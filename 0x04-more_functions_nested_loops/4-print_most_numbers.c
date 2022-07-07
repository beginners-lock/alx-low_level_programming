#include "main.h"

/**
 * print_most_numbers - Function
 * Description: prints 0-9
 * Return: void
 */

void print_most_numbers(void)
{
	int x;

	for (x = 48; x < 58; x++)
	{
		if (x != 52 && x != 50)
			_putchar(x);
	}
	_putchar('\n');
}
