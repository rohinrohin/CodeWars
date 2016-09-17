#include<stdio.h>
//prints the address of every row
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
  printf("Printing the addresses\n");
  for(i=0;i<=4;i++)
    printf("Address of %d th 1-D array = %p\n",i,s[i]);
  }
  

