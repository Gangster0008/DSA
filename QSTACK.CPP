#include<stdio.h>
#include<conio.h>
int q[10],front=-1,rear=-1;
void eq(int x)
{
	if(rear==9)
	{
		printf("Queue Full");
	}
	else
	{
		if(rear==-1)
		{
			front=rear=0;
		}
		else
		{
		       rear+=1;
		}
		q[rear]=x;
	}
}
void dq()
{
	if(front == -1)
	{
		printf("Queue empty");
	}
	else
	{
		front++;
	}
}
void display()
{
	int i=0;
	for(i=front;i<=rear;i++)
	{
		printf("%d\n",q[i]);
	}
}
void main()
{
	clrscr();
	eq(20);
	eq(30);
	eq(40);
	eq(50);
	dq();
	dq();
	display();
	getch();
}