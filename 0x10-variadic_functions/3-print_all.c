#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of argument
 * Return: void
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int i, j, k = 0;
	char *c;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[i])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[i] == t_arg[j] && k)
			{
				printf(", ");
				break;
			}
			j++;
		}
		switch (format[i])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), k = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), k = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), k = 1;
			break;
		case 's':
			c = va_arg(valist, char *), k = 1;
			if (!c)
			{
				printf("(nil)");
				break;
			}
			printf("%s", c);
			break;
		}
		i++;
	}
	printf("\n"), va_end(valist);
}
