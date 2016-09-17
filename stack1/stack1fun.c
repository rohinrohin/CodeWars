
    //implemntation of stack with top and size local variable
   #include"stack1.h"
   
   int push(int *s, int x, int *t, int size)
   {
     if(*t==size-1)
     {
         printf("STACK FULL\n");
         return -1;
     }
     (*t)++;  //or ++*t
     s[*t]=x;
     return 1;
    } 

   int pop(int *s, int *t)
   {
      int x;
      if(*t==-1)
      {
        printf("STACK EMPTY..\n");
        return -1;
      }
      x=s[*t];
      (*t)--;//or --*t
      return x;
    }

   void display(int *s, int t)
   {
    int i;
    if(t==-1)
      printf("Empty stack\n");
    else
     {
       for (i=t; i>=0; i--)
         printf("%d ",s[i]);
      printf("\n"); 
     }
   }






