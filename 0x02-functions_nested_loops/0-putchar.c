#include "main.h"

/**
 * main - Entry point
 * Description: prints out _putchar+new line
 * Return: Always returns 0
 */

int main(void)
{
	char text[9] = "_putchar";
	int x;

	for (x = 0; x < 8; x += 1)
	{
		_putchar(text[x]);
	}
	_putchar('\n');
	return (0);
}
