#include "main.h"

/**
 * _isalpha - Entry function
 * @i: This represenets the ASCII code of the character
 * Description: Checks if it character is an alphabet
 * Return: Always 1 for letter, 0 for the rest
 */

int _isalpha(int i)
{
    if ((i >= 97 && i <= 122) || (i >= 65 && i <= 90))
    {
      return (1);
    }
    else
    {
      return (0);
    }
    _putchar('\n');
}
