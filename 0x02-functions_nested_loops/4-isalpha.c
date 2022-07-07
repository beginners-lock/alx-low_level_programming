#include "main.h"

/**
 * _isalpha - Entry function
 * @i: This represenets the ASCII code of the character
 * Description: Checks if it character is an alphabet
 * Return: Always 1 for letter, 0 for the rest
 */

int _isalpha(int c)
{
    if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
    {
      return (1);
    }
    else
    {
      return (0);
    }
    _putchar('\n');
}
