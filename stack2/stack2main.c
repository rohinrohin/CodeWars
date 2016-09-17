 
  #include"stack2.h"
   //implementation of stack functions using structures
  main()
  {
   STACK stk; 
   int x,ch,k;
   int top,size;
   printf("Enter the size\n");
   scanf("%d",&stk.size);
   stk.s=(int*)malloc(sizeof(int)*stk.size);
   stk.top=-1;
  while(1)
  {
    display(stk);
    printf("\n1.PUSH\n");
    printf("\n2. POP\n");
    printf("\n3. DISPLAY");
    
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&x);
            k=push(&stk,x);
            if(k>=0)
               printf("\n Element pushed successfully\n");
            break;
     case 2:k=pop(&stk);
            if(k>=0)
             printf("Element popped=%d\n",k);
             break;
    case 3: display(stk);
            break;
      
     case 4:exit(0);
     }
   }
 }

   
















  
