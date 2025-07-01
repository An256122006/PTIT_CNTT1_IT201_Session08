#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
void printarr(int *arr,int n) {
   for(int i=0;i<n;i++) {
      printf("%d ",arr[i]);
   }
   printf("\n");
}
void merge(int *arr,int n,int l,int mid, int r) {
   int n1=mid-l+1;
   int n2=r-mid;
   int larr[n1],rarr[n2];
   for(int i=0;i<n1;i++) {
      larr[i]=arr[l+i];
   }
   for(int i=0;i<n2;i++) {
      rarr[i]=arr[mid+1+i];
   }
   int i=0,j=0,k=l;
   while(i<n1 && j<n2) {
      if(larr[i]<rarr[j]) {
         arr[k++]=larr[i++];
      }else {
         arr[k++]=rarr[j++];
      }
   }
   while(i<n1) {
      arr[k++]=larr[i++];
   }
   while(j<n2) {
      arr[k++]=rarr[j++];
   }
}
void msort(int *arr,int n,int l,int r) {
   if(l<r) {
      int mid=(l+r)/2;
      msort(arr,n,l,mid);
      msort(arr,n,mid+1,r);
      merge(arr,n,l,mid,r);
   }
}
int main(){
   int n;
   scanf("%d",&n);
   int *arr=(int*)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]);
   }
   printf("beford:");
   printarr(arr,n);
   msort(arr,n,0,n-1);
   printf("after:");
   printarr(arr,n);
   return 0;
}