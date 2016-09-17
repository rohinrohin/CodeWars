#include"poly.h"
main()
 {
  struct node *first,*second,*third;
  
  first = NULL;
  second=NULL;
  third=NULL;
  int cf,px,py,result;

  printf("\nCreating first polynomial..\n");
  createpoly(&first);
  printf("\nCreating the second polynomial..\n");
  createpoly(&second);
  printf("\nAdding the two polynomials & displaying the result..\n"); 
  polyadd(first,second,&third);
  display(third);
 }
