#include "main.h"

/**
 * _isalpha - a function that return 1 if i is a letter. lower or uppercase
 *
 *Return: Always 0.
 */

int _isalpha(int i)
  
{
  if ((i > 'a' && i < 'z') || (i > 'A' && i < 'Z'))
    {
      return (1);
    }
  else
    {
      return (0);
    }

}
