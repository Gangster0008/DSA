#include<stdio.h>
int b[10]={80,60,20,30,50,10,70,40};
void heapify(int a[],int n, int i){
  int temp,largest=i,left=(2*i), right=(2*i +1);
  if(left<=n && a[left]>a[largest]){
    largest=left;
  }
  if(right<=n && a[right]>a[largest]){
    largest=right;
  }
  if(largest!=i){
    temp = a[i];
    a[i] = a[largest];
    a[largest] = temp;
    heapify(a,n,largest);
  }
}
void heapsort(int a[],int n){
  int i,temp;
  for(i=n/2-1;i>=0;i--){
    heapify(a,n,i);
  }
  for(i=n-1;i>=0;i--){
    temp = a[0];
    a[0] = a[i];
    a[i] = temp;
    heapify(a,i-1,0);
  }
}
void display(int a[]){
  int i=0;
  for(i=0;i<8;i++){
    printf("%d\n",a[i]);
  }
}
int main() {
  heapsort(b,8);
  display(b);
  return 0;
}
