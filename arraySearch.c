#include<stdio.h>

void main() {
    int n, size, arr[100], i;
    printf("Enter Size of Array: ");
    scanf("%d", &size);
    for(i = 0; i < size; i++) {
        printf("Enter Number %d: ", (i + 1));
        scanf("%d", &arr[i]);
    }
    printf("Enter Number to Find: ");
    scanf("%d", &n);
    printf("%d is Found at Following Index: ", n);
    for(i = 0; i < size; i++) {
        if(arr[i] == n)
            printf("%d ", i);
    }
}