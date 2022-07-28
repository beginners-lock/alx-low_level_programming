#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: size of the array
 * @c: storaged of chars
 * Return: pointer of an array chars
 */

char *create_array(unsigned int size, char c)
{
	unsigned  int x;
	char *cr;

	if (size == 0)
		return (NULL);

	cr = malloc(sizeof(c) * size);

	if (cr == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
		cr[x] = c;

	return (cr);
}
