#include <stdio.h>

int main()

{
  char charType;
  int integerType;
  long int longType;
  long long int longlongType;
  float floatType;

  printf("size of a char: %ld byte(s)\n",sizeof(charType));
  printf("size of an int: %ld byte(s)\n",sizeof(integerType));
  printf("size of a long int: %ld byte(s)\n",sizeof(longType));
  printf("size of a long long int: %ld byte(s)\n",sizeof(longlongType));
  printf("size of a float: %ld byte(s)\n",sizeof(floatType));

  return (0);
}
