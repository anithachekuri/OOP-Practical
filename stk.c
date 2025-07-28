//program using stack 
#include<stdio.h>
#include <stdlib.h>
#define SIZE 5
int s[SIZE],top=-1;

void push(int x)
{
	if(top==SIZE-1)
	 printf("\nStack oveflow");
	else
	{
		top++;
		s[top]=x;
	}
}
void display(void)
{
	int i;
	if(top==-1)
     printf("\nStack is empty");
    else
    {
 	for(i=top;i>=0;i--)
	 printf("%d ",s[i]);
	}
}

void pop(void)
{
	if(top==-1)
	 printf("\nStack underflow");
	else
	 {
	  	
	 }
}

int main()
{
	int ch,n;
	while(1)
	{
		printf("\n1.Push\n2.Pop\n3.display\n4.Stop\nEnter your choice");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
			printf("\nEnter value to push")	;
			scanf("%d",&n);
			push(n);
			break;
			case 2:
			 pop();
			 break;
			case 3:
			 display();
			 break;
			case 4:
			 exit(0); //return 0;
			default:
			 printf("\nInvalid choice,try again");
		}
	}
	return 0;
}

