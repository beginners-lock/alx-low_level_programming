#include "main.h"

/**
 * print_last_digit - Entry function
 * @i: number as int
 * Description: Prints the last digit
 * Return: returns the last digit
 */

int print_last_digit(int i)
{
	int x;

	x = i % 10;

	if (x < 0)
  {
		x = -x;
  }
  
	_putchar(x + '0');
	return (x);
}
