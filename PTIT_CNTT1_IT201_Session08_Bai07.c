#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
void swap(int *a,int *b) {
   int temp=*a;
   *a=*b;
   *b=temp;
}
int partition(int *arr, int left, int right) {
   int pivot = arr[right];
   int i=left-1;
   for (int j=left;j<right;j++) {
      if (arr[j]<pivot) {
         i++;
         swap(&arr[i],&arr[j]);
      }
   }
   swap(&arr[i+1],&arr[right]);
   return i+1;
}
void quicksort(int *arr,int left,int right) {
   int pi=partition(arr,left,right);
   quicksort(arr,left,pi-1);
   quicksort(arr,pi+1,right);
}
int main(){
   int n;
   scanf("%d",&n);
   int *arr=(int*)malloc(n*sizeof(int));
   for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]);
   }
   quicksort(arr,0,n-1);
   return 0;
}