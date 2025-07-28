//program using arrays in functions
#include<stdio.h>
void accept(int x[20],int n)
{
  int i;
  for(i=0;i<n;i++)
   scanf("%d",&x[i]);
}
void display(int x[20],int n) 
{
  int i;
  for(i=0;i<n;i++)
   printf("%d ",x[i]);
}

int xyz()
{
  int a[20], i, n,j,v;
  printf("\nEnter the no. of elements");
  scanf("%d",&n);
  printf("\nEnter the values");
  accept(a,n);
  printf("\nArray values are");
  display(a,n);
  printf("\nAgain displaying array is");
  display(a,n);
  return 0;
}


