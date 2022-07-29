#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates to strings
 * @s1: first string
 * @s2: second string
 * @n: amount of bytes
 * Return: pointer shall point to a newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *sout;
	unsigned int a, b, x, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;

	for (b = 0; s2[b] != '\0'; b++)
		;

	if (n > b)
		n = b;

	x = a + n;

	sout = malloc(x + 1);

	if (sout == NULL)
		return (NULL);

	for (a = 0; y < x; y++)
		if (y < a)
			sout[y] = s1[y];
		else
			sout[y] = s2[y - a];
	sout[y] = '\0';

	return (sout);
}
