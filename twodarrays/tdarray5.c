#include<stdio.h>
/*pointer to array */
void display(int (*)[],int,int);
main()
 {
  int i,j;
  int s[3][4]={
              5,7,5,9,
              4,6,3,1,
              2,9,0,6,               
             };
  
   display(s,3,4);
 }

  void display(int (*q)[4], int row,int col)//q = pointer to first element , which is a 1D array of size 4
  {
    int i,j;
    for(i=0;i<row;i++)
    {
    for(j=0;j<col;j++)
       printf("%d ",q[i][j]);
     printf("\n");
    }
  }

 

  

