#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * srand - generates randomized number
 * x - variable holding generated number
 * printf - prints output
 * if, else if, else - conditional statements
 */

int main(void)
{
  int x;

  srand(time(0));
  x = rand()  - RAND_MAX / 2;

  printf("%d \n", x);

  if (x > 0)
    {
      printf("The number is positive \n");
    }
  else if (x < 0)
    {
      printf("The number is negative \n");
    }
  else
    {
      printf("The number is zero \n");
    }
  return 0;
}
