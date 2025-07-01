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
      int key=arr[i];
      int j=i-1;
      while(j>=0&&arr[j]>key) {
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=key;
   }
   printf("after:");
   printarr(arr,&n);
   return 0;
}