#include<stdio.h>
#include<stdlib.h
//program to implement a singly linked list
{
  int data;
   struct node *next;
};

void insert_front(struct node**,int);
void insert_end(struct node**,int);
void delete(struct node**,int);
void display(struct node*);
void reverse(struct node **);
void insert_pos(int ,int ,struct node **);
main()
{
  int ch,x,pos;
  struct node *first;//pointer to the list
  first=NULL;
  while(1)
  {
    display(first);
    printf("\n1.insert front\n");
    printf("\n2. insert end\n");
    printf("\n3. delete a node\n");
    printf("\n4. insert at a position\n");
    printf("\n5. Reverse the List\n");
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
            delete(&first, x);
            break;
      case 4:printf("Enter the position and element..");
            scanf("%d %d",&pos,&x);
            insert_pos(x,pos,&first);
            break;
     case 5: reverse(&first);
           break;
     case 6:exit(0);
     }
   }
 }

  void delete(struct node **p,int x)
  {
    struct node *q,*prev;
    q=*p;//copy first node's address in q;
    prev=NULL;

    //keep moving forward till the node is found

    while((q!=NULL)&&(q->data!=x))
    {
      prev=q;
      q=q->next;
     }
     
     if(q==NULL)
        printf("Node not foud\n");
    else
    {
     //if first node
     if(prev==NULL)
      *p=q->next;//*p=(*p)->next;
     else
      prev->next=q->next;
    free(q);
   }
 }
     
  

  void insert_end(struct node**p,int x)
  {
    struct node *temp,*q;
    temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=NULL;

    //if this is the first node
    if(*p==NULL)
       *p=temp;
    else
      {
         q=*p; //copy the first node's address in q;
         //keep moving till you reach the last node    
         while(q->next!=NULL)
          q=q->next;
         q->next=temp;//link the new node to the last node
      }
   }
  
  void insert_front(struct node**p, int x)
  {
    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x; 
    temp->next=*p;//link the new node to the first node
    *p=temp;//copy the adress of new node to first
  }

    

   void display(struct node *q)
   {
      if(q==NULL)
        printf("Empty List\n");
      else
      {
       while(q!=NULL)
        {
          printf("%d->",q->data);
          q=q->next;
        }
      }
   }
   
   void reverse(struct node **p)
   {
     struct node *curr,*temp,*prev;
     prev=NULL;
     curr=*p;
  
     while(curr!=NULL)
     {
       temp=curr->next;  
       curr->next=prev;
       prev=curr;
       curr=temp;
      }
     *p=prev;
    }

  void insert_pos(int x,int pos,struct node **p)
  {
    int i;
    struct node *q,*temp,*prev;
    q=*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    // if first position
    if (pos==1)
    {
       temp->next=*p;//or temp->next=q;
      *p=temp;
    }
    else
     {
        //go to the desired position
        for(i=1;(q!=NULL)&&(i<pos);++i)
        {
         prev=q;
         q=q->next;
        }
         if(q!=NULL) //insert in middle
             {
                temp->next=q;
                prev->next=temp;             
             }
         else
            {
              if(i==pos)  //insert at the end
                 prev->next=temp;
            else
                 printf("\nInvalid position\n");
            }
      } 
           
   }    






