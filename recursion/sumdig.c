//program to find the sum of digits of a number using recursion
#include<stdio.h>
main()
{
  int n,sum;
  printf("Enter the number");
  scanf("%d",&n);
  sum=sumdig(n);
  printf("the sumof digits of %d = %d",n,sum);
 }

  int sumdig(int n)
  {
    int sum;
    if(n==0)
      return 0;
    sum= (n%10) + sumdig(n/10);
    return sum;
   }

