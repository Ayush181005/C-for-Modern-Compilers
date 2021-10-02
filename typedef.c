#include <stdio.h>

typedef struct student{
    char name[20];
    int rollNo;
    float marks;
} Student; // now we can call this by only using Student;

void main(){
    Student ayush = {"Ayush", 4, 99,9}; // No need of struct keyword again and again
}