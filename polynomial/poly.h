#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int coeff;
  int px;
  int py;
  int flag;
  struct node *next;
}NODE;

void create_poly(NODE**);
void insert_end(NODE **, int ,int,int);
void poly_add(NODE*,NODE*,NODE**);


