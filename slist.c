#include<stdio.h>
#include<stdlib.h>

 struct node
 {
  int data;
  struct node *next;
 };
 void insert_head(int,struct node**);
  void insert_tail(int,struct node**);
  void insert_pos(int ,int ,struct node **);
  struct node *insert_first(int , struct node*);
  void delete_node(int ,struct node**);
  void reverse(struct node **);
  void delete_pos(int,struct node **);
 
 void display(struct node *);
 main()
 {
  struct node *first;
  
  first = NULL;
  int x,ch,pos;
  while(1)
  {
    display(first);
    printf("\n1..insert node at head..");
    printf("\n2..insert a node at tail");
    printf("\n3..delete a node");
    printf("\n4..display");
    printf("\n5.insert at position");
    printf("\n6.Reverse the list");
    printf("\n7.delete at position");
    printf("\n8..exit");

    printf("\nEnter the choice...");
    scanf("%d",&ch);
    switch(ch)
    {
     case 1:printf("\nEnter the value..");
            scanf("%d",&x);
            //insert_head(x,&first);
            first=insert_first(x,first);
            break;
     case 2:printf("\nEnter the value..");
            scanf("%d",&x);
            insert_tail(x,&first);
            break;
      case 3:printf("Enter the value..");
            scanf("%d",&x);
            delete_node(x,&first);
            break;
      case 4:display(first);
            break;
     case 5:printf("Enter the value and position..");
            scanf("%d %d",&x,&pos);
            insert_pos(x,pos,&first); 
            break;
     case 6: reverse(&first);
            break;
     case 7:printf("Enterposition..");
            scanf("%d",&pos);
            delete_pos(pos,&first); 
            break;
     case 8:exit(0);
     }//end switch
   }//end while
 } 


    void delete_pos(int pos, struct node **p)
    {
      int i;
      struct node *q,*prev;
       q=*p;
      prev=NULL;
      for(i=1;((q!=NULL)&&(i<pos));i++)//go to desired position
      {
          prev=q;
          q=q->next;
       }
       if(q==NULL) //end of the list
         printf("Invalid Position");
       else
       {
         if(pos==1)  //delete the first node
          *p=q->next;
        else
           prev->next=q->next;//delete the node in middle or last
        free(q);
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
     



   void insert_head(int x, struct node **p)
   {
     struct node *temp;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
     temp->next=*p;
      *p=temp;//modifies first
    }

   void display(struct node *q)
    {
      while(q!=NULL)
      {
         printf("->%d",q->data);
          q=q->next;
       }
     }

    //inserts in front of the list and returns the address of the first node
    struct node * insert_first(int x,struct node *p)
    {
        struct node *temp;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->data=x;
        temp->next=p;
        return temp;
     }

    void insert_tail(int x, struct node **p)
    {
      struct node *q,*temp;
      temp=(struct node*)malloc(sizeof(struct node));
      temp->data=x;
      temp->next=NULL;

      q=*p;
      if(q==NULL)//if it is the first node
        *p=temp;
      else
       {
        while(q->next!=NULL)//go to the last node
          q=q->next;
        q->next=temp;
      } 
    }     
    
          
  void delete_node(int x,struct node **p)
  {
    struct node *q,*prev;
    q=*p;
    prev=NULL;
    while((q!=NULL)&&(q->data!=x))//traverse the list till node is found
     {
       prev=q;
       q=q->next;
     }
       if(q==NULL)
         printf("\nNOde not found...");
       else
         {
        if(prev==NULL)//first node
          *p=q->next;
        else
          prev->next=q->next;//link the nodes
      free(q);
      }
    } 
    
  void insert_pos(int x,int pos,struct node **p)
  {
    int i;
    struct node *q,*temp,*prev;
    q=*p;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->data=x;
    temp->next=NULL;
    if (pos==1)
    {
       temp->next=*p;//or temp->next=q;
      *p=temp;
    }
    else
     {
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
       
    
     
    
