#include <stdio.h>

int main()

{
  char charType;
  int integerType;
  long int longType;
  long long int longlongType;
  float floatType;

  printf("Size of a char: %ld byte(s)\n",sizeof(charType));
  printf("Size of an int: %ld byte(s)\n",sizeof(integerType));
  printf("Size of a long int: %ld byte(s)\n",sizeof(longType));
  printf("Size of a long long int: %ld byte(s)\n",sizeof(longlongType));
  printf("Size of a float: %ld byte(s)\n",sizeof(floatType));

  return (0);
}
