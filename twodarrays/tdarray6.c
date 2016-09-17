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
  
   display(&s[0],3,4);
 }

  void display(int (*q)[4], int row,int col)
  {
    int i,j;
    int *p; 
   for(i=0;i<row;i++)
    {
    p=(int*)(q +i);//converts array pointer to integer pointer by casting
    //can also write p=*(q+i)
    for(j=0;j<col;j++)
       printf("%d ",*(p+j));
     printf("\n");
    }
  }

 

  

