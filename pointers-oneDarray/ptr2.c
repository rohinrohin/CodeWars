#include<stdio.h>
void disp(int *, int );
main()
{
 int a[5]={1,2,3,4,5};
 disp(&a[0],5);
}

 void disp(int *a, int n)
 {
  int i;
  for(i=0;i<n;i++)
    ++*a; 
  //the first element gets incremented 5 times
  //prints 6,2,3,4,5
  printf("The values of the array..\n");
  for(i=0;i<n;i++)
     printf(" %d",a[i]);  

}
