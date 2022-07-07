#include "main.h"

/**
 * print_square - function
 * @n: size of the square
 * Description: prints hashes spuares
 * Return: no return
 */

void print_square(int n)
{
	int a, b;

	for (a = 0; a < n; a++)
	{
		for (b = 0; b < n; b++)
		{
			_putchar(35);
		}
		if (a != n - 1)
			_putchar('\n');
	}
	_putchar('\n');
}
