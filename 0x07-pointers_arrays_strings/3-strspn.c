#include "main.h"

/**
 * _strspn - length of a substring
 * @s: segment of bytes
 * @accept: only bytes
 * Return: the number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b;
	int c = 0;

	for (a = 0; s[a] != '\n'; a++)
	{
		if (s[a] != 32)
		{
			for (b = 0; accept[b] != '\0'; b++)
			{
				if (s[a] == accept[b])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
