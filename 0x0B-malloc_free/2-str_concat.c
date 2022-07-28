#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first str
 * @s2: second str
 * Return: pointer of an array of chars
 */

char *str_concat(char *s1, char *s2)
{
	char *strout;
	unsigned int a, b, x, y;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	for (a = 0; s1[a] != '\0'; a++)
		;
	for (b = 0; s2[b] != '\0'; b++)
		;
	strout = malloc(sizeof(char) * (a + b + 1));

	if (strout == NULL)
	{
		free(strout);
		return (NULL);
	}
	for (x = 0; x < a; x++)
		strout[x] = s1[x];

	y = b;
	for (b = 0; b <= y; x++, b++)
		strout[x] = s2[b];

	return (strout);
}
