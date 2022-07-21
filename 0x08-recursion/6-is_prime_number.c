#include "main.h"

/**
 * prime_funct - prime number
 * @x: input number
 * @y: iterator
 * Return: 1 if prime and 0 if not
 */

int prime_funct(unsigned int x, unsigned int y)
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
 * is_prime_number - checks if integer n is a prime number
 * @n: input number
 * Return: 1 if the input integer is a prime number else returns 0
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
