#include <stdio.h>

/**
 * print_to_98 - all natural numbers from n to 98
 * @i: as int
 * Description: prints all numbers from n to 98
 * Return: Always void
 */

void print_to_98(int i)
{
	if (i > 98)
	{
		for (; i > 98; i--)
		{
			printf("%d, ", i);
		}
	}
	else if (i < 98)
	{
		for (; i < 98; i++)
		{
			printf("%d, ", i);
		}
	}
	printf("%d\n", i);
}
