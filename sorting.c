#include<stdio.h>
int b[10]={80,60,20,30,50,10,70,40};
void bblsort(int a[], int n){
  int i,j,temp;
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      if(a[i]>a[j]){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;
      }
    }
  }
}
void inssort(int a[], int n){
  int i,j,temp;
  for(i=1;i<n;i++){
    temp = a[i];
    j=i;
    while(a[j-1]>temp && j>=1){
      a[j]=a[j-1];
      j--;
    }
    a[j] = temp;
  }
}
void selsort(int a[], int n){
  int i,j,temp,min;
  for(i=0;i<n;i++){
    min = i;
    for(j=i+1;j<n;j++){
      if(a[min]>a[j]){
        min = j;
      }
      temp = a[i];
      a[i] = a[min];
      a[min] = temp;
    }
  }
}
void display(int a[]){
  int i=0;
  for(i=0;i<8;i++){
    printf("%d\n",a[i]);
  }
}
void quicksort(int a[],int low, int high){
  int i,j,temp,pivot;
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
    a[pivot] = temp;
    quicksort(a,low,j-1);
    quicksort(a,j+1,high);
  }
}
void heapify(int a[],int n, int i){
  int temp,largest = i,left = (2*i),right=(2*i+1);
  if(left<=n && a[left]>a[largest]){
    largest = left;
  }
  if(right<=n && a[right]>a[largest]){
    largest = right;
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
int main() {
  heapsort(b,8);
  display(b);
  return 0;
}
