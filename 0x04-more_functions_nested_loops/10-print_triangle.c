#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: the size of the triangle
 */

void print_triangle(int size)
{
  int a, b, c;

  if (size > 0)
    {
      for (a = 0; a < size; ++a)
	{
	  for (c = (size - 1); c > a; --c)
	    {
	      _putchar(' ');
	    }
	  for (b = 0; b <= a; ++b)
	    {
	      _putchar('#');
	    }
	  _putchar('\n');
	}
    }
  else
    _putchar('\n');
}
