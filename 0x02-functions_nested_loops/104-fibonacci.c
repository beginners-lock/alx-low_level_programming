#include <stdio.h>

/**
 * main - Entry point
 * Description: Print first 50 fibonnaci
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int a = 1;
	unsigned long int b = 2;
	int x;
	unsigned long int sum;

	printf("%lu, %lu", a, b);

	for (x = 0; x < 96; x++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %lu", sum);
	}

	printf("\n");
	return (0);
}
