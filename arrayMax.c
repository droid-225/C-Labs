#include<stdio.h>
#include<limits.h>

void main() {
    int nums[5], max = INT_MIN, i;
    for(i = 0; i < 5; i++) {
        printf("Enter Number %d: ", (i + 1));
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < 5; i++) {
        if(max < nums[i])
            max = nums[i];
    }
    printf("Maximum = %d", max);
}