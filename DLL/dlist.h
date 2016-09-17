#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
  int data;
  struct node *next;
  struct node *prev;
}NODE;
void insert_front(NODE**,int);
void insert_end(NODE**,int);
void delete_node(NODE**,int);
void delete_pos(NODE**,int);
void insert_pos(NODE**,int, int);
void display(NODE*);

