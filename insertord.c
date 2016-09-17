	#include<stdio.h>
	#include<stdlib.h> 
	struct node
	{ 
	   int data;
   	struct node *next;
	};
         // struct node *first;
 	void insert_order(int,struct node **);
	 void display(struct node *); 
	main()
	 {
	  struct node *first;
	  first=NULL;
	  int x;
	  while(1)
	 {
	  printf("\nenter the value..");
	  scanf("%d",&x);
	  if(x==0)
	    break;
	  insert_order(x,&first);
	  display(first);
	 }
      }
 

 void display(struct node *q)
  {
  printf("\n");
  printf("     "); 
  while(q!=NULL)
   {
    printf("%d->",q->data);
    q=q->next;
   }
}

   void insert_order(int x, struct node **p)
   {
     struct node *temp,*q,*prev;
     temp=(struct node*)malloc(sizeof(struct node));
     temp->data=x;
      temp->next=NULL;

     q=*p;
     prev=NULL;

     while((q!=NULL)&&(q->data<x))
     {
        prev=q;
        q=q->next;
      }

     if(q==NULL)
     {
        if(prev==NULL)//empty list
          *p=temp;//first node of the list
        else
          prev->next=temp;//insert as last node
      }
     else
      {
          if (prev==NULL)//insert as first node
           { 
            temp->next=q;
             *p=temp; //change the value of first           
             }
           else //insert in middle
            {
              prev->next=temp;
              temp->next=q;
            }
       }
    } 




 





















	/*void insert_order(int x,struct node **p)
	 {
	   struct node*q,*prev,*temp;
	   temp=(struct node*)malloc(sizeof(struct node));
	   temp->data=x;
	   temp->next=NULL;
   
	   q=*p;
	   prev=NULL;

           while((q!=NULL) &&(q->data < x))
           {
             prev=q;
             q=q->next;
            }
           if(q==NULL)
   {
     if(prev==NULL)//empty list, insert the node
       *p=temp;
     else
       prev->next=temp;//last node
   }
   else
    {
      if(prev==NULL)//insert in front of the list
      {
        temp->next=q;
        *p=temp;
       }
      else
      {//insert in middle
        prev->next=temp;
        temp->next=q;
      }
    }
  }*/
   
