#include "main.h"

/**
 * _isupper - check for uppercase
 *
 * @n: character ASCII code
 *
 * Return: 1 if it is uppercase
 */

int _isupper(int n)
{
	if (n >= 65 && n <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
