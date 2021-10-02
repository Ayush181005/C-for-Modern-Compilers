#include <stdio.h>
#include <string.h>

struct employee{ // This declares a new user-defined data type, now employee is like int
    int salary;
    float hike;
    char name[10];
};

void show(struct employee e);

void main(){
    struct employee ayush;
    // ayush.name = "Ayush"; // This is giving error because it is assigning value to only first character of name
    // To overcome this error,
    strcpy(ayush.name, "Ayush");
    ayush.hike = 5.3;
    ayush.salary = 1000000;

    printf("Name of employee is %s\n", ayush.name);
    printf("Salary of employee is %d\n", ayush.salary);
    printf("Hike of employee is %f\n", ayush.hike);

    // Structures in memory
    //           1000000               5.3               "Ayush"
    // Address    78810               78814               78818
    // Continuous memory locations
    // In an array of structures, adjacent memory locations

    // Pointer to structure
    struct employee *ptr = &ayush;
    printf("%d\n", (*ptr).name); // Dereference pointer and get name from it
    printf("%d\n", ptr->name); // Using Arrow operator

    // Passing structure to function
    show(ayush);
}

void show(struct employee e){
    printf("%s\n", e.name);
    printf("%d\n", e.salary);
    printf("%f\n", e.hike);
}