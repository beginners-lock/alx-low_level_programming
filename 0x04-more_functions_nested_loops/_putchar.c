#include <unistd.h>
#include "main.h"

/**
 * _putchar - function
 * @c: the character to print
 * Description - writes character c
 * Return: 1
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
