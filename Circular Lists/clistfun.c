   #include"clist.h"
   
  void insert_front(NODE **p, int x)
  {
     NODE *temp;

     temp=(NODE*)malloc(sizeof(NODE));
     temp->data=x;
      temp->next=temp;

    if(*p==NULL)//no list , first node
        *p=temp;
    else
      {
          temp->next=(*p)->next;
           (*p)->next=temp;
       }
   }


  void insert_end(NODE **p, int x)
  {
     NODE *temp;

     temp=(NODE*)malloc(sizeof(NODE));
     temp->data=x;
      temp->next=temp;

    if(*p==NULL)//no list , first node
        *p=temp;
    else
      {
          temp->next=(*p)->next;
           (*p)->next=temp;
            *p=temp;//make last point to thelast node
       }
   }

   void display(NODE *p)
   {
     NODE *q;
     if(p==NULL)
       printf("Empty List\n");
   else
    {
     q=p->next;//go to the first node  

      while(q!=p)//stops at the last node
      {
         printf("%d->",q->data);
          q=q->next;
       }
      printf("%d ->",q->data);//print the last node
    }
   }

   void delete_node(NODE **p,int x)
   {
     NODE * q, *prev, *r;
     r=*p;
     prev=r;
     q=r->next;
     //keep moving till you find node to be deleted
     //or you reach the last node
     while((q!=r)&&(q->data!=x))
     {
       prev=q;
       q=q->next;
      }
      if(q->data==x)
      {
        if(q==r)//if last node
        {
          if(q->next==q)//only one node
             *p=NULL;
         else
           {
            //prev node is linked to first node
            prev->next=q->next;
            *p=prev;//make last point to the prev node
            }
        }
        else    
         //delete the first or the middle
          prev->next=q->next;   
        free(q);
      }
     else
      printf("Node not found\n");
    }



     
    












