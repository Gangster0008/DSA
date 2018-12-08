#include<stdio.h>
int b[10]={80,60,20,30,50,10,70,40};
void selsort(int a[], int n){
  int i,j,min,temp;
  for(i=0;i<n;i++){
    min = i;
    for(j=i+1;j<n;j++){
      if(a[min]>a[j]){
        min = j;
      }
    }
    temp = a[i];
    a[i] = a[min];
    a[min] = temp;
  }
}
void display(int a[]){
  int i=0;
  for(i=0;i<8;i++){
    printf("%d\n",a[i]);
  }
}
int main() {
  selsort(b,8);
  display(b);
  return 0;
}
