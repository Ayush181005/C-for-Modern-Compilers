#include <stdio.h>

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    for(int i=10; i>=1; i--){
        printf("%dx%d=%d\n", num, i, num*i);
    }
}