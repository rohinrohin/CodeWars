   #include"queue1.h"
   
   int insert(int *q,int x,int *f, int*r, int size)
   {
     if(*r==size-1)
      {
        printf("Queue full\n");
        return -1;
      }
       (*r)++; //increment rear pointer
        q[*r]=x;
        if(*f==-1)//inserting first element
           *f=0;
     return 1; 
   }
   
  int remove1(int *q,int *f, int*r )
   {
     int x;
     if(*f==-1)//check for queue empty
      {
        printf("Queue empty\n");
        return -1;
      }
        x=q[*f];//get element pointed by f
        if(*f==*r)//only one element
           *f=*r=-1;
         else
           (*f)++;
     return x; 
   }
  
  void display(int *q,int f, int r)
  {
    int i;
    if(f==-1)
     printf("Queue empty\n");
   else
     {
        for(i=f; i<=r;i++)
          printf("%d ",q[i]);
     }
 }

















