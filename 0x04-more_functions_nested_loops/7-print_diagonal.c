#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - draws a diagonal line
 * @n: is the number of times the character \ should printed
 */

void print_diagonal(int n)
{
  int a, b;

  if (n > 0)
    {
      for (a = 0; a < n; ++a)
	{
	  for (b = 0; b < a; b++)
	    {
	      _putchar(' ');
	    }
	  _putchar('\\');
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
}
