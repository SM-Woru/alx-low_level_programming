#include <stdio.h>

int main()

{
  char charType;
  int integerType;
  long int longType;
  long long int longlongType;
  float floatType;

  printf("size of char: %ld bytes\n",sizeof(charType));
  printf("size of int: %ld bytes\n",sizeof(integerType));
  printf("size of long int: %ld bytes\n",sizeof(longType));
  printf("size of long long int: %ld bytes\n",sizeof(longlongType));
  printf("size of float: %ld bytes\n",sizeof(floatType));

  return (0);
}
