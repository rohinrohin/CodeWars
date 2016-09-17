#include<stdio.h>
#include<stdlib.h>
 //implementation of stack functions using structures
  typedef struct stack
  {
    int *s,top,size;
  }STACK;


//function prototypes

 int push(STACK*,int);
 int pop(STACK*);
 void display(STACK);

