//circular lists with header node
#include<stdio.h>
#include<stdlib.h>

 struct node
 {
  int data;
  struct node *next;
 };
  void insert_head(int,struct node*);
  void insert_tail(int,struct node*);
  void delete_node(int ,struct node*);
  void create_head(struct node **);
 
 void display(struct node *);
 main()
 {
  struct node *head;//address of the header node
  
  int x,ch,pos;
  head=NULL;
  create_head(&head);//creates the header node
  while(1)
  {
    display(head);
    printf("\n1..insert node at head..");
    printf("\n2..insert a node at tail");
    printf("\n3..delete a node");
    printf("\n4..display");
    printf("\n5.exit");
    

    printf("\nEnter the choice...");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("\nEnter the value..");
            scanf("%d",&x);
            insert_head(x,head);
            
            break;
     case 2:printf("\nEnter the value..");
            scanf("%d",&x);
            insert_tail(x,head);
            break;
      case 3:printf("Enter the value..");
            scanf("%d",&x);
            delete_node(x,head);
            break;
      case 4:display(head);
            break;
     
     case 5:exit(0);
     }//end switch
   }//end while
 } 


    void create_head(struct node **h)
    {
      struct node *temp;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=0;
      temp->next=temp;
       *h=temp;
     }



   void insert_head(int x, struct node *p)
   {
     struct node *temp;
     //struct node q=p;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=p->next;
     p->next=temp;
     p->data++;
   }


   void insert_tail(int x, struct node *p)
   {
     struct node *temp;
     struct node *q;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=temp;
      
     if(p->next==p)//empty list
      {
        temp->next=p->next;
        p->next=temp;
      }
     else
      {
        q=p->next; // go to the first node
        while(q->next!=p)//go to the last noe
           q=q->next;
        temp->next=q->next;//link after the last node
         q->next=temp;
        }     
      p->data++;
    }
       

   void display(struct node *p)
   {
     struct node *q;
     q=p;
     while(p->next!=q)
     { 
       printf("->%d ",p->data);
       p=p->next;
      }
      printf("->%d ",p->data);
    }

    
    void  delete_node(int x , struct node *p)
    {
      struct node *q,*prev;
      prev=p;//p is the header node
      q=p->next;//go to the first node
      while((q!=p)&&(q->data!=x))
        {
           prev=q;
           q=q->next;
         }
        if(q==p)
          printf("Node not found..\n");
        else
          {
          prev->next=q->next;
          p->data--;
          free(q);
          }
        }
    
    


          
      
     
    
