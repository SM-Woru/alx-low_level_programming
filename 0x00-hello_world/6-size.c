#include <stdio.h>

int main()

{
  char charType;
  int integerType;
  long int longType;
  long long int longlongType;
  float floatType;

  printf("size of char: %ld byte(s)\n",sizeof(charType));
  printf("size of int: %ld byte(s)\n",sizeof(integerType));
  printf("size of long int: %ld byte(s)\n",sizeof(longType));
  printf("size of long long int: %ld byte(s)\n",sizeof(longlongType));
  printf("size of float: %ld byte(s)\n",sizeof(floatType));

  return (0);
}
