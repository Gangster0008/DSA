#include<stdio.h>
int b[10]={80,60,20,30,50,10,70,40};
void inssort(int a[], int n){
  int i,j,temp;
  for(i=1;i<n;i++){
    temp = a[i];
    j=i;
    while(a[j-1]>temp && j>=1){
      a[j] = a[j-1];
      j--;
    }
    a[j] = temp;
  }
}
void display(int a[]){
  int i=0;
  for(i=0;i<8;i++){
    printf("%d\n",a[i]);
  }
}
int main() {
  inssort(b,8);
  display(b);
  return 0;
}
