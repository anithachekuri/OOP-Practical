//program to check for a strong number
#include <stdio.h> 
int main()
{
	int n,f,i,s=0;
	scanf("%d",&n);
	t=n;
	while(n!=0)
	{
		r=n%10;
		for(i=1,f=1;i<=r;i++)
		 f=f*i;
		s=s+f;
	    n=n/10;
	}
	if(s==t)
	 printf("\nStrong number");
	else
	 printf("\nNot a strong  number");
  return 0;	
}

