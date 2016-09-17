#include<stdio.h>
main()
{
 int a[3][3]={1,2,3,
              4,5,6,
              7,8,9
             };

 printf("a= %u\n",a);  //Pointer to array
 printf("a+1 =%u\n",a+1);

 printf("\na[0]= %u\n",a[0]);// Integer pointer
 printf("a[0]+1 =%u\n",a[0]+1);

 printf("\n&a[0][0] = %u\n",&a[0][0]);//Integer pointer
 printf("&a[0][0]+1 = %u\n",&a[0][0]+1);

 printf("\n&a[0] = %u\n",&a[0]);//Pointer to array
 printf("&a[0]+1 = %u\n",&a[0]+1);

 printf("\n&a= %u\n",&a);
 printf("&a+1 = %u\n",&a+1);
}         









    
