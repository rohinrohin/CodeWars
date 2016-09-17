//program to find the sum and the smallest of an array using recursion

#include<stdio.h>
main()
{
  int sumarray(int*,int);//function prototype
  int findmin(int*,int);
  int a[]={4,3,2,1};
  printf("the sum = %d\n",sumarray(a,3));
  printf("The smallest = %d\n",findmin(a,0,3));
}

  sumarray(int *a,int n)
  {
     int s;

     if(n==0)
       return a[n];
     s=a[n]+sumarray(a,n-1);
     return s;
  }
    
   int findmin(int *a, int n)
   {
       int m;
      if(n==0)
         return a[n];
      m=findmin(a,n-1);
      if(m<a[n])
        return m;
       else
         return a[n];
    }

    int findmin(int *a,int l, int r)
    {
         int m,m1,m2;
        if(l==r)//one element
          return a[l];
        m=(l+r)/2;//find the mid
        m1=findmin(a,l,m);//smallest in left half
        m2=findmin(a,m+1,r);//smallest in the right half
        if(m1<m2)
           return m1;
        else
           return m2;
     }


   






  
