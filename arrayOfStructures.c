#include <stdio.h>

struct employee{
    int salary;
    float hike;
    char name[10];
};

void main(){
    struct employee facebook[100];
    strcpy(facebook[0].name, "Ayush");
    facebook[0].hike = 5.67;
    facebook[0].salary = 5000;
    // Like this we can do this for 100 employees of facebook
}