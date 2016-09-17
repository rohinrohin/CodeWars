 #include "poly.h"
 void create_poly(NODE **p)
 {
   int cf, px, py;
   while(1)
   {
     printf("Enter the coefficient, power of x and powers of y\n");
     scanf("%d %d %d",&cf,&px,&py);
     if(cf==0)
       break;
 
     insert_end(p,cf,px,py);
   }
  }   

   void poly_add(NODE*p,NODE*q, NODE**t)
   {
      NODE *q1;
      int cf,px,py;
     while(p!=NULL)
     {
       cf=p->cf;
       px=p->px;
       py=p->py;
       q1=q;
       while(q1!=NULL)
       {
         if((px==q1->px)&&(py==q1->py))
         {  q1->flag=0;
            break;
         }
          q1=q1->next;
        }
        if(q1!=NULL)//middle of q1 and you have found powers of x and powers of y equal
         {
            if(cf+q1->cf!=0)
               insert_end(t,cf+q1->cf,px,py);
          }
          else
            insert_end(t,cf,px,py);
         p=p->next;
      }

    q1=q;
    while(q1!=NULL)
    {
       if(q1->flag==1)
         insert_end(t,q1->cf,q1->px,q1->py);
       q=q->next;
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

            













    

   
