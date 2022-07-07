#include "main.h"

/**
 * print_alphabet - Entry function
 * Description: prints a to z
 * Return: Always void
 */
void print_alphabet(void)
{
	int x;

	for (x = 97; x <= 122; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
