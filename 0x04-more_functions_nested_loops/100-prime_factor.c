#include <stdio.h>

/**
 * main - function
 * Description: prime factor
 * Return: 0
 */
int main(void)
{
	long int i, p;

	i = 612852475143;
	for (p = 2; p <= i; p++)
	{
		if (i % p == 0)
		{
			i /= p;
			p--;
		}
	}
	printf("%ld\n", p);
	return (0);
}
