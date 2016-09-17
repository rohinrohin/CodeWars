	#include<stdio.h>
	#include<stdlib.h> 
	struct node
	{ 
	   int data;
   	struct node *next;
	};
         // struct node *first;
        void insert_order(int , struct node **);
        void create(struct node **);
        void display(struct node *); 	 
        void merge(struct node *,struct node *, struct node **);
         void insert_end(int, struct node**);
	main()
	 {
	  struct node *first,*second,*third;
	  first=NULL;
          second=NULL;
          third=NULL;
	  int x;
	  printf("Creating List one..\n");//create ordered list
          create(&first);
          printf("Creating List two...\n");
          create(&second);
          printf("Displaying first list\n");
          display(first);
          printf("displaying second list\n");
          display(second);
          printf("Merging two Lists...\n");
          merge(first,second,&third);
          printf("Displaying the third list\n");
          display(third);
           printf("\n");
         
        }

      void create(struct node **p)
       {
          int x;
           printf("Enter the values for the list");
            while(1)
            {
              scanf("%d",&x);
               if(x==0)
                 break;
              insert_order(x,p);
             }
         }
 
      void merge(struct node *p,struct node *q, struct node **t)
      {
        while((p!=NULL)&&(q!=NULL))
        {
           if(p->data <q->data)
            {
              insert_order(p->data,t);
              p=p->next;
            }
           else
            {
              insert_order(q->data,t);
              q=q->next;
            }
       }

       if(p==NULL)
        {
           while(q!=NULL)
             {
                insert_order(q->data,t);
                q=q->next;
             }
        }
        else
         {

          while(p!=NULL)
             {
                insert_order(p->data,t);
                p=p->next;
             } 

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


        void display(struct node *p)
        {
            while(p!=NULL)
            {
               printf("->%d",p->data);
               p=p->next;
             }
          }

       
 

 
