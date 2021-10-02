#include <stdio.h>

void main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);

    for(int i=1; i<=10; i++){
        printf("%dx%d=%d\n", num, i, num*i);
    }

    // Sum of numbers ocuuring in the multiplication table
    int sum = 0;
    for(int i=1; i<=10; i++){
        sum = sum+num*i;
    }
    printf("Sum of all the numbers occuring in the multiplication table of %d = %d", num, sum);
}