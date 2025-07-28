//program using Binary search technique
#include<stdio.h>
int binser(int a[],int n, int k)
{
	//type your code here
	int lb=0,ub=n-1;
	int m;
	while(lb<ub)
	{
		m=(lb+ub)/2;
		if(a[m]==k)
		 return m;
		else if(a[m]<k)
		 ub=m-1;
		else
		 lb=m+1;
	}
	return -1;
}
void accept(int a[], int n)
{
	int i;
	//type your code here
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
}
void display(int a[],int n)
{
	//type your code here  
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
}
int main()
{
	int a[25],n,k,p;
	printf("\nEnter the number of values");
	scanf("%d",&n);
	printf("\nEnter the values in ascending order");
	accept(a,n);
	printf("\nValues are\n");
	display(a,n);
	printf("\nEnter the value to search");
	scanf("%d",&k);
	p=binser(a,n,k);
	if(p==-1)
	 printf("\nValue not present");
	else
	 printf("\nValue present at %d index",p);
   return 0;
}
