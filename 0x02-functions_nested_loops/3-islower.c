#include "main.h"

/**
 * _islower - Entry function
 * @i: This is the ASCII code of the character
 * Description: checks for lowercases
 * Return: Always 1 (Success)
 */

int _islower(int i)
{
	if (i >= 97 && i <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
