#include <stdio.h>

/**
 * bbmain - function executted before main
 * Descriptiono: execute function after main
 * Return: void
 */

void __attribute__ ((constructor)) bbmain()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
