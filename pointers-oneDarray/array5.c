#include<stdio.h>
//pointers and arrays
main()
{
 int arr[]={0,1,2,3,4};
 int *ptr;
//prints 4,3,2,1,0
 for(ptr=arr+4;ptr>=arr;ptr--)
  printf("%d ", arr[ptr-arr]);
 
}

 
