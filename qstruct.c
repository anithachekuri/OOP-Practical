/*program implementing queue operations using structures and arrays*/
#include<stdio.h>
#include<stdlib.h>
#define MAX 5
struct queue   
{
 int a[MAX],r,f;
};
struct queue q={{0},-1,-1};
void enqueue(int);
void dequeue();
void display();
int main()
{
	int opt,num; 
	while(1) // always true 
	{
	
		printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Quit \nEnter your choice");
		scanf("%d",&opt);
		switch(opt)
		{
			case 1: 
			printf("\nEnter a value");
			scanf("%d",&num);
			enqueue(num);
			break;
			case 2:
			dequeue();
			break;
			case 3:
			display();
			break;
			case 4:
			exit(0);
			default:
			printf("\nWrong choice, try again");
	    }  
     }   
	   return 0;
}

void enqueue(int n)
{
	if(q.r==MAX-1)
	printf("\nQueue full\n");
	else
	{
		q.r++;
		q.a[q.r]=n;
		if(q.f==-1)
		  q.f=0;
	}
}
void dequeue()
{
	int n;
	if((q.r==-1 && q.f==-1)  || (q.f>q.r))
      printf("\nQueue is empty");
	else
	{
		n=q.a[q.f];
		q.f++;
	    printf("\nDeleted value is %d",n);
	}
}

void display()
{
	int i;
	if((q.r==-1 && q.f==-1)  || (q.f>q.r))
      printf("\nQueue is empty");
	else
	{
	  for(i=q.f;i<=q.r;i++)
		printf("%d  ",q.a[i]);
	}
}

