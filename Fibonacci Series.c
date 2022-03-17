#include<stdio.h>
int main()
{
  
  int a = 0, b = 1;
  int c = a + b;
  int i;
  printf("Fibonacci Series: %d, %d, ", a, b);
  for (i = 0; i <4; i++) 
  {
    printf("%d, ", c);
    a = b;
    b = c;
    c = a + b;
  }

  return 0;
}
