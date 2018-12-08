#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<ctype.h>
int stack[10],top=-1;
char postfix[10];
void push(int x)
{
	top++;
	stack[top]=x;
}
int pop()
{
	return stack[top--];
}
void display()
{
	printf("Answer is:%d",stack[top]);
}
void main()
{
	int i=0,x,y,res=0;
	clrscr();
	printf("Enter a postfix exp:");
	gets(postfix);
	i=0;
	while(postfix[i]!='\0')
	{
		if(isalnum(postfix[i]))
		{
			push(toascii(postfix[i]-48));
		}
		else
		{
			x=pop();
			y=pop();
			switch(postfix[i])
			{
				case '+':
					res = x+y;
					break;
				case '-':
					res = y-x;
					break;
				case '*':
					res = x*y;
					break;
				case '/':
					res = y/x;
					break;
			}
			push(res);
		}
		i++;
	}
	display();
	getch();
}