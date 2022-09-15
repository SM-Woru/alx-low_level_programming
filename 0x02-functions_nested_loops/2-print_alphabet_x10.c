#include "main.h"

/**
 * void print_alphabet_x10(void) - a main function that prints lowercase of alphabets x10
 *
 * _putchar - prints 
 *
 * return : 0 - returns zero
 */

void print_alphabet_x10(void);
{
  int i = 0, j;

  while(i<10)
    {
      j;

      for (j = 'a'; j <= 'z'; j++)
	{
	  _putchar(j);
	}
      _putchar('\n');
	}
  return 0;
}
