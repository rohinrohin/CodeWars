#include<stdio.h>
//prints the array elements
main()
 {
  int i,j;
  int s[5][2]={
               {1234,56},
               {1212,33},
               {1434,80},
               {1312,78},
               {1203,75}
              };
  printf("Printing the values\n");
  for(i=0;i<=4;i++)
   { 
    for(j=0;j<2;j++)
        printf("%d ",s[i][j]);
     
    printf("\n");
   }  
}
  

