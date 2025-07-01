#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
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
      int temp=i;
      for(int j=i+1;j<n;j++) {
         if(arr[j]<arr[temp]) {
            temp=j;
         }
      }
      int temp2=arr[i];
      arr[i]=arr[temp];
      arr[temp]=temp2;
   }
   printf("after:");
   printarr(arr,&n);
   return 0;
}