#include <stdio.h>
#include <limits.h>

void main() {
    int nums[10], i, max = INT_MIN;

    for(i = 0; i < 10; i++) {
        printf("Enter Number At Index %d: ", i);
        scanf("%d", &nums[i]);
    }
    for(i = 0; i < 10; i++) {
        if(max < nums[i])
            max = nums[i];
    }
    printf("Maximum Value = %d", max);
}