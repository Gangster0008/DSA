#include<stdio.h>
int a[10]={2,5,3,8,7,4,6,1},b[10];
void merge(int low,int mid,int high)
{
int n=low,i=low,j=mid+1,k;
j=mid+1;
while((n<=mid)&&(j<=high))
{
if(a[n]<a[j])
b[i]=a[n++];
else
{
b[i]=a[j];
j++;
}
i++;
}
if(n>mid)
{
for(k=j;k<=high;k++)
{
b[i]=a[k];
i++;
}
}
else
{
for(k=n;k<=mid;k++)
b[i++]=a[k];
for(k=low;k<=high;k++)
a[k]=b[k];
}
}
void mergesort(int low,int high)
{
int mid;
if(low<high)
{
mid=(low+high)/2;
mergesort(low,mid);
mergesort(mid+1,high);
merge(low,mid,high);
}
}
void display(int a[]){
  int i=0;
  for(i=0;i<8;i++){
    printf("%d\n",a[i]);
  }
}
int main() {
  mergesort(0,7);
  display(a);
  return 0;
}
