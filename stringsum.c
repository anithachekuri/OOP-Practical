//to sum the digits in a given string
#include<stdio.h>
int main()
{
	char str[100];
	scanf("%s",str);
	int i,s=0,x;
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]>='0' && str[i]<='9')
        {
        	x=str[i]-48; // converts ASCII code of digit to its numeric value
        	s=s+x;
		}
	}
	printf("\n%d",s);
	return 0;
}
		     

