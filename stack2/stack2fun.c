   #include"stack2.h"
   
   //implementation of stack functions using structures
   
   int push(STACK *stk, int x)
   {
     if(stk->top==stk->size-1)
     {
         printf("STACK FULL\n");
         return -1;
     }
     stk->top++;  
     stk->s[stk->top]=x;
     return 1;
    } 

   int pop(STACK stk)
   {
      int x;
      if(stk->top==-1)
      {
        printf("STACK EMPTY..\n");
        return -1;
      }
      x=stk->s[stk->top];
      stk->top--;//or --*t
      return x;
    }

   void display(int *s, int t)
   {
    int i;
    if(stk.top==-1)
      printf("Empty stack\n");
    else
     {
       for (i=stk.top; i>=0; i--)
         printf("%d ",s[i]);
      printf("\n"); 
     }
   }







