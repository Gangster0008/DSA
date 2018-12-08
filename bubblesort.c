#include<stdio.h>
int b[10]={80,60,20,30,50,10,70,40};
void bblsort(int a[],int n)
{
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[j]<a[i]){
        temp = a[i];
        a[i]= a[j];
        a[j]= temp;
      }
    }
  }
}
void display(int a[]){
  int i=0;
  for(i=0;i<8;i++){
    printf("%d\n",a[i]);
  }
}
int main() {
  bblsort(b,8);
  display(b);
  return 0;
}
