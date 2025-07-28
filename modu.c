#include<stdio.h>
int add(int a,int b)
{
	return (a+b);
}

int mul(int a,int b)
{
	return (a*b);
}

int maintain()
{
	int x,y,z;
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("\nAdd result : %d",z);
	z=mul(x,y);
	printf("\nProduct : %d",z);	
	scanf("%d%d",&x,&y);
	z=add(x,y);
	printf("\nAfter adding %d and %d resutls is %d",x,y,z);
	return 0;
}
