#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int n;
    scanf("%d", &n);
    int *arr=(int *)malloc(sizeof(int) * n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int search;
    scanf("%d", &search);
    for (int i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("so can tim o vi tri thu %d:",i+1);
            return 0;
        }
    }
    printf("ko tim thay phan tu");
    return 0;
}
