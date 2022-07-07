#include "main.h"

/**
 * _isupper - Function
 * @i: character
 * Description: check for uppercase
 * Return: 1 if it is uppercase else 0
 */
int _isupper(int i)
{
	if (i >= 65 && i <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
