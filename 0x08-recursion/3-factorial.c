#include "main.h"

/**
 * factorial -  returns factorial of a given integer
 * @i: number
 * Return:  factorial of a given ineteger
 */

int factorial(int i)
{
	if (i < 0)
		return (-1);
	else if (i == 0)
		return (1);
	else
		return (i * factorial(i - 1));
}
