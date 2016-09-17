#include<stdio.h>
//program to show passing of function pointers to a function
int maximum(int,int);
int minimum(int,int);
main()
{
 int x,y,ch;
 int result(int (*)(int,int),int,int);
 int r;
 x=10;
 y=30;

 //f=maximum;
 printf("X= %d and Y=%d\n",x,y);
 printf("Find max(1) or min(2)..");
 scanf("%d",&ch);

 if(ch==1)
    r =result(maximum,x,y);
 else
    r=result(minimum,x,y);

 printf("the result = %d\n",r);

}

 int maximum(int x, int y)
 {
    if(x>y)
     return x;
    else
     return y;
 }

 int minimum(int x,int y)
 {
    if(x<y)
     return x;
    else
     return y;
 } 
 
 int result(int (*f)(int,int),int x, int y)
 {
   f(x,y);
 }
