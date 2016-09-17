#include<stdio.h>
//program to implement bubble sort using call back
void bubsort(int *,int ,int(*)(int,int));
int ascend(int,int);
int descend(int,int);
main()
{
  int i;
  int a[5]={3,2,1,5,4};
  int n=5;
  bubsort(a,n-1,descend);
  printf("After sort");
  for(i=0;i<n;++i)
     printf("%d ",a[i]);
}

void bubsort(int *a, int n, int (*compare)(int,int) )
{
int i,j,t;
for(i=0;i<n;++i)
{
  for(j=0;j<n-i;++j)
  {
    if(compare(a[j],a[j+1]))
    {
      t=a[j];
      a[j]=a[j+1];
      a[j+1]=t;
     }
   }
 }
} 

 int ascend(int x, int y)
 {
   if(x>y)
     return 1;
   else
     return 0;
 }

  int descend(int x, int y)
  {
    if(x<y)
      return 1;
    else
      return 0;
}
