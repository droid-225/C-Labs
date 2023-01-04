#include<stdio.h> 

int facto(int);

void main() {
    int x;
    printf("Enter number you want to find factorial of: ");
    scanf("%d", &x);
    //fac = facto(x);
    printf("%d! = %d", x, facto(x));
}

int facto(int x) {
    if(x == 0 || x == 1) 
        return 1;
    else 
        return x * facto(x - 1);
}