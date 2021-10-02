#include <stdio.h>

void display(); // Function prototype

void display(){ // Function Definition
    printf("Hello, from display function");
}

// n!
void factorial(){
    int n = 5, fac = 1;
    for(int i=n; i>0; i--){
        fac = fac*i;
    }
    printf("\n%d! = %d", n, fac);
}

int main(){
    int a;
    display(); // Function Call

    factorial();
    return 0;
}

// void(){...} - non return type, without arguments
// void(int a, int b){...} - non return type, with arguments
// int(){return ...;} - return type, without arguments
// int(int a, int b){return ...;} - return type, with arguments