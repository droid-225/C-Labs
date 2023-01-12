#include<stdio.h>

void main() {
    int nums[10], x = 0;
    while(x < 10) {
        printf("Enter Number %d: ", (x + 1));
        scanf("%d", &nums[x]);
        x++;
    }

    x = 0;
    printf("Numbers\t\tEven Or Odd\n");
    while(x < 10) {
        printf("%d\t\t", nums[x]);
        if(nums[x] % 2 == 0)
            printf("Even\n");
        else   
            printf("Odd\n"); 
        x++;
    }
}