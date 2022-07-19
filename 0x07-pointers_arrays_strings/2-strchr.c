#include <stdlib.h>
#include "main.h"

/**
 * _strchr - finds a character in a string
 * @s: string
 * @c: character
 * Return: a pointer to the first appearance of the character c in string s
 * ,or NULL if the character is not found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s != c)
			s++;
		else
			return (s);
	}
	if (c == '\0')
		return (s);
	return (NULL);
}
