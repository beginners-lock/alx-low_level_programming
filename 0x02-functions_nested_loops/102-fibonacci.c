#include <stdio.h>

/**
 * main - Entry point
 * Description: Print first 50 fibonnaci
 * Return: Always 0.
 */

int main(void)
{
	long int a = 1;
	long int b = 2;
	int x;
	long int sum;

	printf("%ld, %ld", a, b);

	for (x = 0; x < 48; x++)
	{
		sum = a + b;
		a = b;
		b = sum;
		printf(", %ld", sum);
	}

	printf("\n");
	return (0);
}
