#include <stdio.h>

int sum(int*, int*);
void swap(int *, int *);

int main(){
    int x = 5, y = 6;
    printf("a+b=%d", sum(&x, &y)); // Sending the address of the values
    printf("\nx is %d and y is %\n", x, y);

    int n1 = 5;
    int n2 = 6;
    printf("Before Swap: n1 = %d\tn2 = %d\n", n1, n2);
    swap(&n1, &n2);
    printf("After Swap:  n1 = %d\tn2 = %d\n", n1, n2);
    return 0;
}

int sum(int *a, int *b){ // Getting the address of the values by making the variables pointers
    *a = *a + 56;
    // Now on changing the value of a or b, the value of x and y will also change because a and b are assigned the same address as x and y thus the same value is stored at the same address
    return *a + *b; // Value of a + Value of b
}

// swapping variables using CBR
void swap(int* x, int* y){
    int temp = *x;
    *x = *y;
    *y = temp;
}