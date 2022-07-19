#include "main.h"
/**
 * _memset -  fills memory with a constant byte
 * @s: memory area
 * @n: number of bytes to fill
 * @b: constant byte
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}
