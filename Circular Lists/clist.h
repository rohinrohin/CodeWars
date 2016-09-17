#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
}NODE;
void insert_front(NODE**,int);
void insert_end(struct node**,int);
void delete_node(struct node**,int);
void display(struct node*);


