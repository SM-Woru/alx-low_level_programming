#include "main.h"

/**
 * print_sign - Prints the sign of a number.
 *
 * Return: 1, 0, -1
 */

int print_sign(int i)
{
  if (i > 0)
    {
      _putchar('+');
      return (1);
    }
  else if (i == 0)
    {
      _putchar('0');
      return (0);
    }
  else
    {
      _putchar('-');
      return (-1);
    }

}
