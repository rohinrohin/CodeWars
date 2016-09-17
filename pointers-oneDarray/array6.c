#include<stdio.h>
//pointers and arrays
main()
{
 int a[]={0,1,2,3,4};
 int *p[]={a,a+1,a+2,a+3,a+4};
 int **ptr=p;
 printf("%p %d\n",a, *a); 
 printf("%p %p %d\n",p, *p, **p);  
 printf("%p %p %d\n",ptr, *ptr, **ptr);
 
}
 /*output
 1. a=address of first element of a i.e 0
    *a= value of the first element of the array
 2. p = address of first element of array of p
    * p = value of the first element of p 
   **p= 0
 3. ptr : value of ptr i.e p
    *ptr = *p = a
    **ptr = **p = *a = 0 */
