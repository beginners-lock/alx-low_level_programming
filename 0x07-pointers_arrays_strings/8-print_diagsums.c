#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  sum of the two diagonals of a square matrix of integers
 * @a: array name
 * @size: array size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x = 0;
	int y = size - 1;
	int sum1 = 0;
	int sum2 = 0;

	while (x <= (size * size))
	{
		sum1 = sum1 + a[x];
		x = x + size + 1;
	}
	while (y < (size * size - 1))
	{
		sum2 += a[y];
		y = y + size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
