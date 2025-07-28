//program to reverse a string implementing stack operations
#include <stdio.h>
#define MAX 50
char s[MAX];
int top=-1;
void push(char n)
{
  if(top==MAX-1)
   printf("\nStack overflow");	
  else
   {
   	top++;
   	s[top]=n;
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
	   printf("%c",s[i]);
	 } 
}
int main()
{
	char str[MAX];
	int i;
	scanf("%s",str);
	for(i=0;str[i]!='\0';i++)
     push(str[i]);
    printf("\nString in reverse is \n");
    display();
  return 0;
}
