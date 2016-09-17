#include<stdlib.h>
#include<stdio.h>
//program to create a 2D array dynamically
main()
{
  int i,j,r,c;
   int **p;
   printf("Enter the size of the array\n");
   scanf("%d %d",&r,&c);
   //create rows
   p=(int**)malloc(r*sizeof(int*));

   //create cols

   for(i=0;i<r;i++)
     p[i]=(int*)malloc(c*sizeof(int));

   printf("\nEnter the elements..\n");
   for(i=0;i<r;i++)
    for(j=0;j<c;j++)
     scanf("%d",&p[i][j]);
  
   printf("Printing the array elements\n");
   for(i=0;i<r;i++)
   {
    for(j=0;j<c;j++)
     printf("%d ",p[i][j]);
    printf("\n");
   }
  
}
