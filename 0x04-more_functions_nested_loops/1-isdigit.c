#include "main.h"

/**
 * _isdigit - check for digit
 * @i: integer
 * Description: check if digit
 * Return: return 1 if it is a digit else 0
 */

int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
