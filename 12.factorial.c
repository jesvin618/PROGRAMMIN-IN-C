#include <stdio.h>
int main(void)
{
  int n,i,fact=1;
  printf("Enter a no:");
  scanf("%d",&n);
  for(i=n;i>0;i--)
  {
    fact=fact*i;
  }
  printf("Factorial of the no is:%d",fact);
  return 0;
}
