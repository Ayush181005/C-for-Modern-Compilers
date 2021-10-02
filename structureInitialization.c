#include <stdio.h>

struct student{
    char name[20];
    int rollNo;
    float marks;
};

void main(){
    struct student ayush = {"Ayush", 4, 99.9};
    // struct student ayush = {0}; // All elements set to 0
}