/*

1*A
1*A*2*B
1*A*2*B*3*C
1*A*2*B*3*C*4*D

*/
#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=65;
		for(j=1;j<=i;j++,k++)
		 printf("%d*%c*",j,k);
		printf("\b \n");
	//	printf("\n");
	}
	return 0;
}
