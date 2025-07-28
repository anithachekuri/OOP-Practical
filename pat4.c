/*pattern
1234
2341
3421
4321 */
#include<stdio.h>
int main()
{
	int i,j,k,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=n;j++)
		 printf("%d",j);
		for(k=i-1;k>=1;k--)
         printf("%d",k);
	  printf("\n");
	}
 return 0;
}
	
	
	
	
	
	
	

