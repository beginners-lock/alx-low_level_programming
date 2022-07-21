#include "main.h"

/**
 * oh_prime - prime number
 * @x: input number
 * @y: iterator
 * Return: 1 if prime else 0
 */

int oh_prime(unsigned int x, unsigned int y)
{
	if (x % y == 0)
	{
		if (x == y)
			return (1);
		else
			return (0);
	}
	return (0 + oh_prime(x, y + 1));
}

/**
 * is_prime_number - is a prime number,
 * @n: input number
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */

int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (0);
	return (oh_prime(n, 2));
}
