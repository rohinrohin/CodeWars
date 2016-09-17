 #include<stdio.h>
 //program to demonstrate factorial of a number
 main()
 {
   int n;
   printf("enter the number");
   scanf("%d",&n);
   printf("The factorial of %d is %d\n",n, fact(n));
 }


   int fact(int n)
   {
     if(n==1)
         return 1;
      f=n*fact(n-1);
     return f;
    }
  
  
