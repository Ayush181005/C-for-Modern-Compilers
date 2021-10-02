#include <stdio.h>

/*
*
**
***
****
n rows
*/

void starPattern(int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void main(){
    starPattern(5);
}