/*program using single linked list*/
#include <stdio.h>
#include <stdlib.h>
 struct node
 {
  int data;
  struct node *link;
 };
struct node *start=NULL;
void create(void)
{
  struct node *temp,*new;
  char ch='y';
  start=(struct node *) malloc (sizeof(struct node *));
  printf("\nEnter any number");
  scanf("%d",&start->data);
  temp=start;
  while(ch=='y' || ch=='Y')
  {
   new = (struct node *) malloc(sizeof(struct node *));
   printf("\nEnter any number");
   scanf("%d",&new->data);
   temp->link=new;
   temp=new;
   printf("\nDo you want to continue insert?");
   scanf(" %c",&ch);  
  }
  temp->link=NULL;
 }
void display(void)
{
 struct node *i;
 printf("\nList  is ");
 for(i=start;i!=NULL;i=i->link)
  printf("%d ",i->data);
}
void insertbegin()
{
  struct node *new;
  new = (struct node *) malloc(sizeof(struct node *));
   printf("\nEnter any number");
   scanf("%d",&new->data);
   new->next=start;
   start=new;
}
void insertend()
{
	struct node *new;
  new = (struct node *) malloc(sizeof(struct node *));
   printf("\nEnter any number");
   scanf("%d",&new->data);
   for(i=start;i->next!=NULL;i=i->next);
   i->next=new;
   new->next=NULL;
}

void intsertmid()
{
  struct node *new,*i,*x;
  int pos;
  new = (struct node *) malloc(sizeof(struct node *));
  printf("\nEnter any number");
  scanf("%d",&new->data);
  printf("\nEnter the value before which you want to insert new node");
  scanf("%d",&pos);
  for(i=start;i->data!=pos;i=i->next)
   x=i;
  x->next=new;
  new->next=i;
}


int main()
{
  create();
  printf("\nAfter creating, Linked List is");
  display();
  insertbegin();
  display();
  insertend();
  display();
  insertmid();
  display();
  return 0;
}


