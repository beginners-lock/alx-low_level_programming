#include <stdio.h>

/**
 * main - prints its name
 * @argv: array
 * @argc: command line arg number
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
