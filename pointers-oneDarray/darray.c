#include<stdlib.h>
#include<stdio.h>
//program to create an array dynaically
main()
{
  int i,n;
   int *p;
   printf("Enter the size of the array\n");
   scanf("%d",&n);
   p=(int*)malloc(n*sizeof(int));

   printf("\nEnter the elements..\n");
   for(i=0;i<n;i++)
     scanf("%d",&p[i]);//(p+i)
  
   printf("Printing the array elements\n");
   for(i=0;i<n;i++)
     printf("%d",p[i]);//*(p+i);
}
