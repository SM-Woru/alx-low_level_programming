#include "main.h"

/**
 * main - a function that updates the value of pointer
 * 
 * *n - pointer variable
 *
 * m - variable of type integer
 *
 * return: 0
 */

void main()
{
  int m;
  int *n;

  m = 402;
  n = &m;
  
  void reset_to_98(int *n);
  *n = 98;
}
