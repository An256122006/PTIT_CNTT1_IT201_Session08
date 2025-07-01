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
   int check=1;
   int n;
   int *arr=(int *)malloc(sizeof(int));
   int choice;
   do {
      printf("\t menu \n");
      printf("1. scan number\n");
      printf("2. Insertion Sort  \n");
      printf("3. search\n");
      printf("Enter choice: ");
      scanf("%d",&choice);
      switch(choice) {
         case 1:
            scanf("%d",&n);
            arr=(int *)realloc(arr,n*sizeof(int));
            for(int i=0;i<n;i++) {
               scanf("%d",&arr[i]);
            }
            print_array(arr,n);
            break;
         case 2:
            insertion_sort(arr,n);
            print_array(arr,n);
            break;
         case 3:
            for (int i=0;i<n-1;i++) {
               if (arr[i]>arr[i+1]) {
                  check=0;
                  break;
               }
            }
            if (check==1) {
               linear_search(arr,n);
            }else {
               binary_search(arr,n,0,n-1);
            }
            break;
         default:
            break;
      }
   }while(choice!=4);
   return 0;
}