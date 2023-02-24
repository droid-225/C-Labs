#include <stdio.h>
#include <math.h>

void main() {
    int num, size, i, rev = 0;
    printf("Enter a Number: ");
    scanf("%d", &num);
    printf("Enter Size of Number: ");
    scanf("%d", &size);
    size--;
    //printf("%d", num % 10);
    
    while (num != 0)
    {
            rev += (num % 10) * pow(10, size);
            num /= 10;
            size--;
    }
    
    printf("Reverse: %d", rev);    
}