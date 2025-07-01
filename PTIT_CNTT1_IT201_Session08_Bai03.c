#include<stdio.h>
#include<stdlib.h>
void printarr(int *arr,int *n) {
   for(int i=0;i<*n;i++) {
      printf("%d ",arr[i]);
   }
   printf("\n");
}
int main(){
   int n;
   scanf("%d",&n);
   int *arr=(int *)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]);
   }
   printf("beford:");
   printarr(arr,&n);
   for(int i=0;i<n;i++) {
      for(int j=0;j<n-1-i;j++) {
         if(arr[j]>arr[j+1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   printf("after:");
   printarr(arr,&n);
   return 0;
}