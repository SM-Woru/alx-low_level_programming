#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  char *ch = "Holberton";

  while (*ch)
    {
      putchar(*ch);
      ch++;
    }
  putchar('\n');

  return (0);
}
