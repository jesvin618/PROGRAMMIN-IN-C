#include <stdio.h>
int main(void)
{
  int n,ch,i,fact=1,count=0;
  while(ch!=4)
  {
  printf("\n\n******MENU******\n");
  printf("1.Factorial of a number\n2.Prime or not\n3.Odd or Even\n4.Exit\n\nEnter your choice:");
  scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    printf("Enter a no:");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
      fact=fact*i;
    }
    printf("Factorial of the no is:%d",fact);
    break;
    case 2:
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      if(n%i==0)
      {
        count++;
      }
    }
    if(count==2)
    {
      printf("%d is a prime number",n);
    }
    else
    {
      printf("%d is not a prime number",n);
    }
    break;
    case 3:
    printf("Enter a no:");
    scanf("%d",&n);
    if(n%2==0)
    printf("The number is even");
    else
    printf("The number is odd");
    case 4:
    break;
  }
  }
  return 0;
}