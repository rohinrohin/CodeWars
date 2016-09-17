   #include"dlist.h"
   
   void insert_front(NODE **p, int x)
   {
     
    NODE *temp;
    temp=(NODE*)malloc(sizeof(struct node));
    temp->data=x;
    temp->prev=temp->next=NULL;

    if(*p==NULL)//empty list
      *p=temp;
    else
      {
         temp->next=*p;
         (*p)->prev=temp;
         *p=temp;
      }
   } 
      
   void insert_end(NODE **p, int x)
   {
     
    NODE *temp,*q;
    temp=(NODE*)malloc(sizeof(struct node));
    temp->data=x;
    temp->prev=temp->next=NULL;

    if(*p==NULL)//empty list
      *p=temp;
    else
      {
        q=*p;
         //go to the end of list
        while(q->next!=NULL)
           q=q->next;
        q->next=temp;//link new node to last node
        temp->prev=q;        
      }
   } 

   void insert_pos(NODE**p,int pos, int x)
  {
    int i; 
    NODE *temp,*q;
     q=*p;

    if(pos==1)
      insert_front(p,x);
    else
      {
         temp=(NODE*)malloc(sizeof(struct node));
         temp->data=x;
         temp->prev=temp->next=NULL;
         for(i=1;(q->next!=NULL)&&(i<pos);i++)
            q=q->next;

         if(i==pos)//insert in middle before q;
           {
             q->prev->next=temp;
             temp->prev=q->prev;
             temp->next=q;
              q->prev=temp;
            }
           else if(i==pos-1)//insert end
           {
             q->next=temp;
             temp->prev=q;
           }
           else
             printf("Invalid position");
        }
    }
              





                




             
         
      


   void delete_pos(NODE**p,int pos)
   {
     int i;
     NODE *q=*p;
    
     if(pos==1)
      {
        if(q->next==NULL)//only one node         
           *p=NULL;
        else
          {
            *p=q->next;//make first point to second node
            (*p)->prev=NULL;
          }
         free(q);
      }
      else
       {
         //go to the desired position         
        for(i=1;((q->next!=NULL)&&(i<pos));i++)
           q=q->next;

        if(i==pos)
        {
          if(q->next==NULL)//delete last node
              q->prev->next=NULL;
           else
            {
               q->prev->next=q->next;
               q->next->prev=q->prev;
             }
           free(q);
        }
       else
        printf("Invalid postion");
       }
      
    }                
 








 


   void delete_node(NODE**p,int x)
   {
     NODE *q;

     q=*p;
     while((q!=NULL) && (q->data!=x))
           q=q->next;

     if(q!=NULL)
     {
        // if only one node in the list
       if((q->prev==NULL)&&(q->next==NULL))
            *p=NULL;//make first NULL
       else if(q->prev==NULL)//first node
           {
              *p=q->next;
              (*p)->prev=NULL;
            }           
        else if(q->next==NULL)//last node
           q->prev->next=NULL;
        else//middle
           {
             q->prev->next=q->next;
             q->next->prev=q->prev;
           }
      free(q);
     }
  else
     printf("NODE not found\n");
   } 
            












   void display(NODE *p)
   {
     while(p!=NULL)
     {
      printf("%d<->",p->data);
      p=p->next;
   }
  }
   
       

  




