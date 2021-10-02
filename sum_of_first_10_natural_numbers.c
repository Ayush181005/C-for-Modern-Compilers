#include <stdio.h>

int sumN(int);

void main(){
    // While loop
    int sum = 0, i=0;
    while(i<=10){
        sum = sum + i;
        i++;
    }
    printf("Sum of first ten natural numbers using while loop = %d", sum);

    // Do-While Loop
    i = 0; sum=0;
    do {
        sum = sum + i;
        i++;
    } while (i<=10);
    printf("\nSum of first ten natural numbers using do while loop = %d", sum);

    // For Loop
    sum = 0;
    for(i=0; i<=10; i++){
        sum = sum + i;
    }
    printf("\nSum of first ten natural numbers using for loop = %d", sum);

    // Recursing Function
    printf("\nSum of first ten natural numbers using recursing function = %d", sumN(10));
}

int sumN(int n){
    if(n==1){
        return n;
    }
    return n + sumN(n-1);
}

// 5 => 1+2+3+4+5