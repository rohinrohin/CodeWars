#include<stdio.h>
//program to manipulate array elements through pointers
main()
{
 int a[]={2,4,6,8,10};
 int i;
 for(i=0;i<=4;i++)
 {
   *(a+i)=a[i]+i[a];//every element of the array doubles
   printf("%d ",*(i+a));
 }
  
}
