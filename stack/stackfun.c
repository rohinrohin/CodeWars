   //implemntation of stack with top ,size global variable
   #include"stack.h"
   extern int top , size;
   int push(int *s, int x)
   {
     if(top==size-1)
     {
         printf("STACK FULL\n");
         return -1;
     }
     top++;
     s[top]=x;
     return 1;
    } 

   int pop(int *s)
   {
      int x;
      if(top==-1)
      {
        printf("STACK EMPTY..\n");
        return -1;
      }
      x=s[top];
      top--;
      return x;
    }

   void display(int *s)
   {
    int i;
    if(top==-1)
      printf("Empty stack\n");
    else
     {
       for (i=top; i>=0; i--)
         printf("%d ",s[i]);
      printf("\n"); 
     }
   }






