#include <stdio.h>

/**
 * main - Entry point
 * Description: Another fibonacci
 * Return: Always 0
 */
int main(void)
{
	long int a, b, x, y;

	a = 1;
	b = 2;
	x = y = 0;
	while (x <= 4000000)
	{
		x = a + b;
		a = b;
		b = x;
		if ((a % 2) == 0)
		{
			y += a;
		}
	}
	printf("%ld\n", y);
	return (0);
}
