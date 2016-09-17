
#include"postfix.h"

 main()
 {
   char infix[100],postfix[100];
   printf("Enter the infix expression\n");
   scanf("%s",infix);
   convertpostfix(infix,postfix);
   printf("Equivalent postfix=%s\n",postfix);
 }
 
