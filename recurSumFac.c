#include<stdio.h> 

int facto(int);

void main() {
    int x = 20;
    printf("Sum of First %d Natural Numbers =  %d", x, facto(x));
}

int facto(int x) {
    if(x == 1) 
        return 1;
    else 
        return x + facto(x - 1);
}