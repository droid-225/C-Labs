#include<stdio.h>

void main() {
    int arr1[2][2] = {{1,0},{0,1}};
    int arr2[2][2] = {{1,0},{0,1}};
    int arr3[2][2];
    int n = 2;

    for(int i = 0; i < 2; i++) {    
        for(int j = 0; j < 2; j++) {       
            arr3[i][j] = 0;    
            for(int k = 0; k < 2; k++) {    
                arr3[i][j] += arr1[i][k] * arr2[k][j];    
            }       
        }    
    } 
   
    for(int i = 0; i < 2; i++) {
        for(int z = 0; z < 2; z++) {
            printf("%d ", arr3[i][z]);
        }
        printf("\n");
    }
}