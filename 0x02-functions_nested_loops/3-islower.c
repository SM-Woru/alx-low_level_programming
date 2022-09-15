#include "main.h"

/**
 * _islower - entry function that checks for lower character
 *
 *Return: Always 0.
 */

int _islower(int i)

{
  if (i > 'a' && i < 'z')
    {
      return (1);
    }
  else
    {
      return (0);
    }

}
