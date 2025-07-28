//program to search for a value in an array
#include <stdio.h>
#include "test1.c"
int main()
{
	int a[50],n;
	scanf("%d",&n);
	accept(a,n);
	printf("\nMy array contains\n");
	display(a,n);
	return 0;
}
