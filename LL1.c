//program to find pair of given sum
#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *start=NULL;
void create()
{
	struct node *new, *temp;
	char ch='y';
	start=(struct node*)	malloc(sizeof(struct node));
	 printf("\nEnter a number");
	 scanf("%d",&start->data);
	 temp=start;
	while(ch=='y'||ch=='Y')
	{
	 new=(struct node*)	malloc(sizeof(struct node));
	 printf("\nEnter a number");
	 scanf("%d",&new->data);
	 temp->link=new;
	 temp=new;
	 printf("\nContinue[y/n]?");
	 ch=getche();
	}
	temp->link=NULL;
}

void display()
{
	struct node *i;
	for(i=start;i!=NULL;i=i->link)
	 printf("%d ",i->data);
}
void findpair(int n)
{
 	 //type your code
 	 struct node *i,*j,*t;
 	 int flag=0;
 	 
}

dispcennode()
{
 int c=0,m=0,p;
 struct node *i;
 for(i=start;i!=NULL;i=i->next)
  c++;
 m=c/2;
 for(p=1;p<=m && i!=NULL;i=i->next)
  p++;
 printf("\n%d",i->data);
}
int main()
{
	int num;
	create();
	printf("\nLinked List is\n");
	display();
    printf("\nEnter sum value to find the pair");
	scanf("%d",&num);
	findpair(num);
	dispcennode();
	return 0;
}







