#include <stdio.h>

int avg(int a, int b, int c){
    return (a+b+c)/3;
}

void main(){
    printf("Average of 3, 4, 5 = %d", avg(3, 4, 5));
}