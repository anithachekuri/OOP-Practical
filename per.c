/*
  input = 
   abc
   output = 
   abc
   acb
   bac
   bca
   cab
   cba
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	int i,j,k,l;
	scanf("%s",str);
	l=strlen(str);
	for(i=0;i<l;i++)
	{
		for(k=i;k<l;k++)
		{
			printf("%c",str[k]);
		}
		if(i>0)
		{
			for(j=0;j<k;j++)
			 printf("%c",str[j]);
		}
	}
	return 0;
}
	
}

