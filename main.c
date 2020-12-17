#include <stdio.h>

int main() 
{
  int a;
  printf("Enter the first number:");
  scanf("%d", &a);
  if (a  > -1)
  {
    printf("A is positive");
  }
  else
  {
    printf("A is negative");
  }
  return 0;
}
