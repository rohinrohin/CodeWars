#include"dlist.h"
main()
{
  int ch,x,pos;
  NODE *first;//pointer to the list
  first=NULL;
  while(1)
  {
    display(first);
    printf("\n1.insert front\n");
    printf("\n2. insert end\n");
    printf("\n3. delete a node\n");
    printf("\n4. delete at a position\n");
    printf("\n5. Insert at a given position\n");
    printf("\n6.exit");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("Enter the element..");
            scanf("%d",&x);
            insert_front(&first, x);
            break;
    case 2:printf("Enter the element..");
            scanf("%d",&x);
            insert_end(&first, x);
            break;
    case 3:printf("Enter the element to be deleted..");
            scanf("%d",&x);
            delete_node(&first, x);
            break;
     case 4:printf("Enter the position");
            scanf("%d",&pos);
            delete_pos(&first,pos);
            break;
     case 5:printf("Enter the position and the element");
            scanf("%d%d",&pos, &x);
            insert_pos(&first,pos,x);
            break;
    
     case 6:exit(0);
     }
   }
 }

   
