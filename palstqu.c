//check palindrome using stack and queue
#include<stdio.h>
#include<string.h>
#define SIZE 50
struct stack
{
	char a[SIZE];
	int top;
};
struct queue
{
	char s[SIZE];
	int f,r;
};

struct stack st={{' '},-1};
struct queue que={{' ' },-1,-1};
void push(char ch)
{
	st.top++;
	st.a[st.top]=ch;
}
char pop(void)
{
	char c;
	c=st.a[st.top];
	st.top--;
	return c;
}
void enqueue(char ch)
{
	que.r++;
	if(que.f==-1)
	 que.f=0;
  que.s[que.r]=ch;
}
char dequeue(void)
{
	char c;
	c=que.s[que.f];
	que.f++;
	return c;
}

int main()
{
	char str[SIZE],x,y;
	int i,l,flag=0;
	printf("\nEnter a string");
	scanf("%s",str);
    l=strlen(str);
	//for(i=0;str[i]!='\0';i++)
	for(i=0;i<l;i++)
	{
		push(str[i]);
		enqueue(str[i]);
	}
    for(i=1;i<=l;i++)
    {
	     x=pop();	
	     y=dequeue();
	     if(x!=y)
	     {
	     	flag=1;
	     	break;
		 }
	}
	 if(flag==0)
	  printf("\nIt is a Palindrome");
	 else
	  printf("\nIt is not a Palindrome");
  return 0;
}

