//program implementing binary search
#include <stdio.h>
int binser(int a[25],int n,int s)
{
	//type your code here
}
void accept(int a[25],int n)
{
	//type your code here
}
void display(int a[25],int n)
{ 
 //type your code here	
}
int main()
{
	int a[25],n,r,k;
	printf("\nEnter the number of values")
	scanf("%d",&n);
	accept(a,n);
	printf("\nArray is \n");
	display(a,n);
	printf("\nEnter the value to search");
	scanf("%d",&k);
	r=binser(a,n,k);
	if(r==-1)
	 printf("\nValue not found");
	else
	 printf("\nValue present at %d index",r);
	return 0;
}
