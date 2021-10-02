#include <stdio.h>

// n! = n * n-1 * n-2 * ... * 5 * 4 * 3 * 2 * 1
// n! = n * (n-1)!

int factorial(int);

void main(){
    printf("%d! = %d", 5, factorial(5));
}

int factorial(int n){
    if(n==1||n==0){
        return 1;
    }
    return n * factorial(n-1);
}