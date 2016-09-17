#include<stdio.h>
//pointers and arrays
main()
{
 int arr[]={0,1,2,3,4};
 int *ptr;
//prints 0,1,2,3,4
 for(ptr=&arr[0];ptr<=&arr[4];ptr++)
  printf("%d ", *ptr);
 
}

 
