#include<stdio.h>
#include <malloc.h>
typedef struct node{
  int data;
  struct node *next;
}stack;
stack *top=NULL, *temp, *nn;
void push(int x)
{
  nn = (stack *)malloc(sizeof(stack));
  nn->data = x;
  nn->next = NULL;
  if(top == NULL)
  {
    top = nn;
  }
  else{
    nn->next = top;
    top = nn;
  }
}
void pop()
{
  if(top==NULL){
    printf("Stack Empty");
  }
  else{
    temp = top;
    top = top->next;
    free(temp);
  }
}
void display(){
  temp = top;
  while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
  }
}
int main()
{
  push(20);
  push(30);
  push(40);
  display();
  pop();
  pop();
  display();
}
