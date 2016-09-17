 
  //implemntation of stack with top and size local variable
  #include"stack1.h"
  
  main()
  {
   int *s,x,ch,k;
   int top,size;
   printf("Enter the size\n");
   scanf("%d",&size);
   s=(int*)malloc(sizeof(int)*size);
   top=-1;
  while(1)
  {
    display(s,top);
    printf("\n1.PUSH\n");
    printf("\n2. POP\n");
    printf("\n3. DISPLAY");
    
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&x);
            k=push(s,x,&top,size);
            if(k>=0)
               printf("\n Element pushed successfully\n");
            break;
     case 2:k=pop(s,&top);
            if(k>=0)
             printf("Element popped=%d\n",k);
             break;
    case 3: display(s,top);
            break;
      
     case 4:exit(0);
     }
   }
 }

   
















  
