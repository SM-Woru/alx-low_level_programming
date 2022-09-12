#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * srand - generates randomized number
 * n - variable holding generated number
 * printf - prints output
 * if, else if, else - conditional statements
 */


int main(void)
{
  int n;

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  
  if (n > 0)
    {
      printf("%d is positive\n",n);
    }
  else if (n < 0)
    {
      printf("%d is negative\n",n);
    }
  else
    {
      printf("%d is zero\n",n);
    }
  return 0;
}
