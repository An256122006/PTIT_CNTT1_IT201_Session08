#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<stdbool.h>
void print_array(int *arr,int size) {
   for(int i=0;i<size;i++) {
      printf("%d ",arr[i]);
   }
   printf("\n");
}
void insertion_sort(int *arr, int n) {
   for(int i=0;i<n;i++) {
      int key=arr[i];
      int j=i-1;
      while(j>=0 && arr[j]>key) {
         arr[j+1]=arr[j];
         j=j-1;
      }
      arr[j+1]=key;
   }
}
void linear_search(int *arr,int n) {
   int key;
   scanf("%d",&key);
   for(int i=0;i<n;i++) {
      if(arr[i]==key) {
         printf("%d\n",i+1);
         return;
      }
   }
   printf("ko tim thay phan tu");
}
void binary_search(int *arr,int n,int left,int right) {
   int key;
   scanf("%d",&key);
      while (left<=right) {
         int mid=(left+right)/2;
         if(arr[mid]==key) {
            printf("%d\n",mid+1);
            return;
         }else if(arr[mid]>key) {
            right=mid-1;
         }else if(arr[mid]<key) {
            left=mid+1;
         }
      }
   printf("ko tim thay phan tu");
}
int main(){
   int n;
   scanf("%d",&n);
   int *arr=(int *)malloc(sizeof(int)*n);
   for(int i=0;i<n;i++) {
      scanf("%d",&arr[i]);
   }
   int choice;
   do {
      printf("\t menu \n");
      printf("\t 1. Insertion Sort \n");
      printf("\t 2. linearSearch \n");
      printf("\t 3. binarySearch \n");
      printf("Enter choice: ");
      scanf("%d",&choice);
      switch(choice) {
         case 1:
            insertion_sort(arr,n);
            print_array(arr,n);
            break;
         case 2:
            linear_search(arr,n);
            break;
         case 3:
            binary_search(arr,n,0,n-1);
            break;
         default:
            break;
      }
   }while(choice!=4);
   return 0;
}