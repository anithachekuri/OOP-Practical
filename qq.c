//program implementing stack operations
#include <stdio.h>
#define MAX 5
int s[MAX],top=-1;
void push(int n)
{
  if(top==MAX-1)
   printf("\nStack overflow");  
  else
   {
     top++;
     s[top]=n;
   }
}
 
void pop(void)
{
  int x;
  if(top==-1)
   printf("\nStack underflow");
  else
   {
     x=s[top];
     top--;
     printf("\n%d is deleted",x);
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
     printf("\n%d",s[i]);
   } 
}
int main()
{
  int ch,n;
  char choice='y';
  while(choice=='y'||choice=='Y')
  {
    printf("1.Push\n2.Pop\n3.Display\nEnter your option");
    scanf("%d",&ch);
    switch(ch)
    {
      case 1:
        printf("\nEnter value to push");
        scanf("%d",&n);
        push(n);
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      default:
        printf("\nInvalid option, try again");
    }
    printf("\nDo you want to continue[y/n]?");
    choice=getche();
  }
  return 0;
}

