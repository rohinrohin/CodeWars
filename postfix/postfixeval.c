  #include <stdio.h>
 int evaluate(char *);
 int isoper(char );
 void push(int , int *, int *);
 int pop(int *, int *);
  main()
  {
    int result;
    char postfix[10];
    printf("Enter the postfix...\n");
    scanf("%s",postfix);
    result=evaluate(postfix);
    printf("result=%d",result);
  }

  int evaluate(char *postfix)
  {
    char ch;
   int i,op1,op2,r,s[10];//stack
   int top=-1;
   i=0;
   while(postfix[i]!='\0')
   {
     ch=postfix[i];
     if(isoper(ch))
     {
        op1=pop(s,&top);
        op2=pop(s,&top);
        switch(ch)
        {
           case '+':r=op1+op2;
                    break;
           case '-':r=op2-op1;
                    break;
            case '*':r=op1*op2;
                    break;
            case '/':r=op2/op1;
                    break;
         }
        push(r,s,&top);
   }
   else
    push(ch-'0',s,&top);
   i++;
  }
   r=pop(s,&top);
   return r;
 }

  int isoper(char ch)
  {
    if((ch=='+')||(ch=='-')||(ch=='/')||(ch=='*'))
        return 1;
    return 0;
  }

  void push(int x, int *s, int *t)
  {
    (*t)++;
     s[*t]=x;
   }
   
   int pop(int *s, int *t)
   {
      int x;
      x=s[*t];
     (*t)--;
      return x;
   }

 










