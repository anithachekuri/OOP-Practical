#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		 printf("%d",j);
		for(j=n;j>=i;j--)
		 printf("*");
		for(k=i;k>=1;k--)
		 printf("%d",k);
	  printf("\n");
	}
  return 0;
}
