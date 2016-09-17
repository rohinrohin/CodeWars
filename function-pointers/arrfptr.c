#include<stdio.h>
int max(int,int);
int min(int,int);
int sum(int,int);

//array of function pointers
main()
{
  int (*f[3])(int,int);
  int res,x=10,y=20;  
  
    f[0]=max;
    f[1]=min;
    f[2]=sum;

  res = f[0](x,y);
  printf("The max= %d\n",res);
  
  res=f[1](x,y);
  printf("the min =%d\n",res);

  res=f[2](x,y);
   printf("the sum=%d\n",res);
 }


  int max(int x,int y)
  {
   if(x>y)
    return x;
   else
    return y;
  }


  int min(int x,int y)
  {
   if(x<y)
     return x;
   else
     return y;
  }

  int sum(int x, int y)
  {
    return(x+y);
  }
 

  
