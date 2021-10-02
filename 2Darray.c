#include <stdio.h>

void main(){
    int arr2D[3][3];
    // int arr2D[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    printf("Enter a 9 numbers: \n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &arr2D[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf(" %d ", arr2D[i][j]);
        }
        printf("\n");
    }
}