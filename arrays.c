#include <stdio.h>

void main(){
    int arr[8];
    // int arr[8] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
    // arr[0] = 0;
    // arr[1] = 1;
    // arr[2] = 2;
    // arr[3] = 3;
    // arr[4] = 4;
    // arr[5] = 5;
    // arr[6] = 6;
    // arr[7] = 7;
    // for(int i=0; i<8; i++){
    //     arr[i] = i;
    // }
    for(int i=0; i<8; i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<8; i++){
        printf("arr[%d] = %d\n", i, arr[i]);
    }
    printf("%d", arr);
}