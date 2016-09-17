#include"clist.h"
main()
{
  int ch,x,pos;
  struct node *last;//pointer to the last node
  last=NULL;
  while(1)
  {
    display(last);
    printf("\n1.insert front\n");
    printf("\n2. insert end\n");
    printf("\n3. delete a node\n");
    
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..");
            scanf("%d",&x);
            insert_front(&last, x);
            break;
     case 2:printf("Enter the element..");
            scanf("%d",&x);
            insert_end(&last, x);
            break;
    case 3:printf("Enter the element to be deleted..");
            scanf("%d",&x);
            delete_node(&last, x);
            break;
      
     case 4:exit(0);
     }
   }
 }

   
