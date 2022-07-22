#include <stdio.h>

/**
 * main - prints all arguments it receives
 * @argc: argv array length
 * @argv: array of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
		printf("%s\n", argv[n]);
	return (0);
}
