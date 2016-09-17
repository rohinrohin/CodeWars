#include<stdio.h>
#include<stdlib.h> 
//queue using a structure
typedef struct queue
 {
   int *q;
   int f,r;
   int size;
  }QUEUE;
  
  int insert(QUEUE *, int );
  int remove1(QUEUE *);
 void display(QUEUE);
  main()
  {
   QUEUE que; 
   int x,ch,k;
   int f,r,size;
   printf("Enter the size\n");
   scanf("%d",&que.size);
   que.q=(int*)malloc(sizeof(int)*que.size);
   que.f=que.r=-1;
  while(1)
  {
    display(que);
    printf("\n1.INSERT\n");
    printf("\n2.DELETE\n");
    printf("\n3.DISPLAY");
    
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&x);
            k=insert(&que,x);
            if(k>=0)
               printf("\n Element pushed successfully\n");
            break;
     case 2:k=remove1(&que);
            if(k>=0)
             printf("Element popped=%d\n",k);
             break;
    case 3: display(que);
            break;
      
     case 4:exit(0);
     }
   }
 }

    int insert(QUEUE *que, int x)
   {
     if(que->r==que->size-1)
      {
        printf("Queue full\n");
        return -1;
      }
       que->r++; //increment rear pointer
        que->q[que->r]=x;
        if(que->f==-1)//inserting first element
           que->f=0;
     return 1; 
   }
   
  int remove1(QUEUE *que)
   {
     int x;
     if(que->f==-1)//check for queue empty
      {
        printf("Queue empty\n");
        return -1;
      }
        x=que->q[que->f];//get element pointed by f
        if(que->f==que->r)//only one element
           que->f=que->r=-1;
         else
           que->f++;
     return x; 
   }


 void display(QUEUE que)
  {
    int i;
    if(que.f==-1)
     printf("Queue empty\n");
   else
     {
        for(i=que.f; i<=que.r;i++)
          printf("%d ",que.q[i]);
     }
 }













  
