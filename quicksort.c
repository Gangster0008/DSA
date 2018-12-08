#include<stdio.h>
int b[10]={80,60,20,30,50,10,70,40};
void display(int a[])
{   int i;
	printf("sorted data:\n");
	for(i=0;i<8;i++)
	{
		printf("%d\n",a[i]);
	}
}
void quicksort(int a[25],int low,int high)
{
int i, j,pivot, temp;
if(low<high){
	i = low;
	pivot = low;
	j = high;
	while(i<j){
	while(a[i]<=a[pivot] && i<high){
		i++;
	}
	while(a[j]>a[pivot]){
		j--;
	}
	if(i<j){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	}
	temp = a[j];
	a[j] = a[pivot];
	a[pivot]= temp;
	quicksort(a,low,j-1);
	quicksort(a,j+1,high);
}
}

void main()
{
quicksort(b,0,7);
display(b);
}
