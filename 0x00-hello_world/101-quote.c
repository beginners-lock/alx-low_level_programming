#include <stdio.h>

/**
 * main - Entry function
 * Description: 'print quote in stderr'
 * Return: Always 1
 */

int main(void)
{
char d[] = "2015-10-19";
char n[] = "Dora Korpar";
fprintf(stderr, "and that piece of art is useful\" - %s, %s\n", n, d);
return (1);
}
