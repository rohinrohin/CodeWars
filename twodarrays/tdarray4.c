#include<stdio.h>
/*pointer to array */
main()
 {
  int i,j;
  int s[][4]={
              5,7,5,9,
              4,6,3,1,
              2,9,0,6,               
             };
  
   int (*q)[4];
  
  q=s;
  
  for(i=0;i<=2;i++)
  {
   printf("address of %d th 1D array= %p\n",i,q);
   q++;
  }
 }
  
  


 

  

