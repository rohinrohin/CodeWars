 
  #include"queue1.h"
  
  main()
  {
   int *q,x,ch,k;
   int f,r,size;
   printf("Enter the size\n");
   scanf("%d",&size);
   q=(int*)malloc(sizeof(int)*size);
   f=r=-1;
  while(1)
  {
    display(q,f,r);
    printf("\n1.INSERT\n");
    printf("\n2. DELETE\n");
    printf("\n3. DISPLAY");
    
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..\n");
            scanf("%d",&x);
            k=insert(q,x,&f,&r,size);
            if(k>=0)
               printf("\n Element inserted successfully\n");
            break;
     case 2:k=remove1(q,&f,&r);
            if(k>=0)
             printf("Element deleted=%d\n",k);
             break;
    case 3: display(q,f,r);
            break;
      
     case 4:exit(0);
     }
   }
 }

   
















  
