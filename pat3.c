/*
input =5
output = 
1
2 6
3 7 10
4 8 11 13
5 9 12 14 15 

input = 4
output = 
1
2 5
3 6 8
4 7 9 10
*/
#include<stdio.h>
int main()
{
	int n,i,j,k,m;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=n-1;
		m=i;
		for(j=1;j<=i;j++,m=m+k)
		 {
		 	printf("%d ",m);
		 }
		printf("\n");
	}
return 0;
}









