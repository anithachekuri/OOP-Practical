#include<stdio.h>
#include "modu.c"
int main()
{
	int m,n,r;
	scanf("%d%d",&m,&n);
	r=mul(m,n);
	printf("Result is %d ",r);
	return 0;
}
