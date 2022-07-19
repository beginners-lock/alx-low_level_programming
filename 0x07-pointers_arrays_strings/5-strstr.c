#include <stdlib.h>
#include "main.h"

/**
 * _strstr - finds a substring
 * @haystack: string
 * @needle: substring
 * Return: pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int n;
	int a = 0;

	while (needle[a] != '\0')
		a++;
	while (*haystack)
	{
		for (n = 0; needle[n]; n++)
		{
			if (haystack[n] != needle[n])
				break;
		}
		if (n != a)
			haystack++;
		else
			return (haystack);
	}
	return (NULL);
}
