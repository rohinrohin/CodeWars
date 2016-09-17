#include<stdio.h>
int maximum(int,int);
main()
{
 int x,y,result;
 int (*f)(int,int);//declration of a function pointers

 x=10;
 y=30;

 f=maximum;//copy the address of maximum in f
 
 result= (*f)(x,y);//call maximum

 printf("the result = %d\n",result);

 result= f(x,y);

 printf("the result = %d\n",result);

}
 


 int maximum(int x, int y)
 {
   if(x>y)
    return x;
   else
    return y;
  } 
