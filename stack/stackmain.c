   //implemntation of stack with top ,size global variable
  #include"stack.h"
  int top,size;
  main()
  {
   int *s,x,ch,k;
   printf("Enter the size\n");
   scanf("%d",&size);
   s=(int*)malloc(sizeof(int)*size);
   top=-1;
  while(1)
  {
    display(s);
    printf("\n1.PUSH\n");
    printf("\n2. POP\n");
    printf("\n3. DISPLAY");
    
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&x);
            k=push(s,x);
            if(k>=0)
               printf("\n Element pushed successfully\n");
            break;
     case 2:k=pop(s);
            if(k>=0)
             printf("Element popped=%d\n",k);
             break;
    case 3: display(s);
            break;
      
     case 4:exit(0);
     }
   }
 }

   
















  
