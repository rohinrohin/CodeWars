#include<stdio.h>
#include<stdlib.h>

  typedef struct stack
  {
    int *a,top,size;
  }STACK;


//function prototypes

 int push(STACK*,int);
 int pop(STACK*);
 void display(STACK);

