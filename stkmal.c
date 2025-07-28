#include<stdio.h>
struct stack
{ 
    int *a; 
    int top;
};
struct stack s1;
int size;
void push(int);
int pop();
void display();
int  main()
{
s1.top=-1;
scanf("%d",&size);
s1.a=malloc(size*sizeof(int));
push(10);
push(20);
push(30);
display();
printf("\n deleted element is %d",pop());
display();
return 0;
}
void push(int data)
{
   if(s1.top==size)
    {
     printf("stack is full no insertion can be done");
     return;
     }
   else
    {
       s1.top++;
	   s1.a[s1.top]=data;
    }
} 
int  pop()
{
  int x;
  if(s1.top==-1)
   {
   printf("stack is empty no deleteion possible");
   return -1;
   }
  else
  {
   x=s1.a[s1.top];
   s1.top--;
   return x; 
  }
}
void display()
{
  int i;
  for(i=s1.top;i>=0;i--)
     printf("\n %d" ,s1.a[i]);
}



