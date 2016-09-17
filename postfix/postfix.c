#include"postfix.h"

 void convertpostfix(char *infix, char *postfix)
 {
  char s[10],sym;//stack;
  int top=-1;
  
  int i=0;
  int j=0;
  push(s,&top,'#');
  while(infix[i]!='\0')
  {
    sym=infix[i];
    while(stack_prec(peep(s,top)) > input_prec(sym))
       postfix[j++]=pop(s,&top);
    if(stack_prec(peep(s,top))!=input_prec(sym))
       push(s,&top,sym);
     else
       pop(s,&top);//brackets '(' and ')'
   i++;
  }
  while(peep(s,top)!='#')
   postfix[j++]=pop(s,&top);
 postfix[j]='\0';
}    

 int stack_prec(char ch)
 {
   switch(ch)
   {
     case '+':
     case '-': return 2;
     case '*':
     case '/': return 4;
     case '^': return 5;
     case '(': return 0;
     case '#': return -1;
     default:return 8;
   }
 }

  int input_prec(char ch)
 {
   switch(ch)
   {
     case '+':
     case '-': return 1;
     case '*':
     case '/': return 3;
     case '^': return 6;
     case '(': return 9;
     case ')': return 0;
     default:return 7;
   }
 }

 void push(char *s, int *t, char sym)
 {
   ++*t; //(*t)++; 
   s[*t]=sym; 
 }
 
 char pop(char *s, int *t)
 {
   char x;
   x=s[*t];
   --*t;
   return x;
 }

  char peep(char *s, int t)
  {
    return s[t];
  }
  
  
  

 
