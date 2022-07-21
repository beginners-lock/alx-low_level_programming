#include "main.h"

/**
 * helper - square root of an integer x
 * @x: input integer
 * @y: iterator
 * Return: square root or -1
 */

int helper(int x, int y)
{
	if (y % (x / y) == 0)
	{
		if (y * (x / y) == x)
			return (y);
		else
			return (-1);
	}
	return (0 + helper(x, y + 1));
}

/**
 * _sqrt_recursion - returns the square root of an integer n
 * @n: integer
 * Return: the square root of an integer
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	if (n == 1)
		return (1);
	return (helper(n, 2));
}
