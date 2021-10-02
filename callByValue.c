#include <stdio.h>

int sum(int, int);

int main(){
    int x = 5, y = 6;
    printf("a+b=%d", sum(x, y));
    printf("\nx is %d and y is %d", x, y);
    return 0;
}

int sum(int a, int b){
    a = a + 55; // even if a is changed, the value of x and y in main function remains unchanged
    // That is because the value of x is copied into value of and value of y is copied into value of b 
    return a+b;
}