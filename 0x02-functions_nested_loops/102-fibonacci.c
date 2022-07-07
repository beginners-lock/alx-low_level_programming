#include <stdio.h>

/**
 * main - Entry point
 * Description: Print first 50 fibonnaci
 * Return: Always 0.
 */
int main(void)
{ 
  int a = 1;
  int b = 2;
  int sum;
	
  printf("%d, %d", a, b);
  
  for (int x = 0; x < 50; x++)
  {
    sum = a + b;
    b = a;
    a = sum;
    printf(", %d", sum);
  }
  
  printf("\n");
  return (0);
  
}
