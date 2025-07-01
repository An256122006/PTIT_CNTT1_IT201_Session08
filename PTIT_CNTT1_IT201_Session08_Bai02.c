#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
int main(){
   int n;
   scanf("%d",&n);
   int *arr=(int *)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]);
   }
   for(int i=0;i<n;i++) {
      for(int j=0;j<n-i-1;j++) {
         if(arr[j]>arr[j+1]) {
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
         }
      }
   }
   int search;
   scanf("%d",&search);
   int left=0,right=n-1;
   while(left<=right) {
      int mid=(left+right)/2;
      if(arr[mid]==search) {
         printf("phaan tu nam o vi tri : %d",mid+1);
         return 0;
      }else if(arr[mid]>search) {
         left=mid+1;
      }else {
         right=mid-1;
      }
   }
   printf("ko tim thay phan tu");
   return 0;
}