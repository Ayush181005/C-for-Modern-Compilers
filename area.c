#include <stdio.h>

float rectArea(){
    float length, breadth;
    printf("\nEnter the length of the rectangle: ");
    scanf("%f", &length);
    printf("\nEnter the breadth of the rectangle: ");
    scanf("%f", &breadth);
    float area = length*breadth; // There is also a library math.h for this which gives library functions
    return(area);
}

float circleArea(){
    const float pi = 22/7;
    float radius;
    printf("\nEnter the radius of the circle: ");
    scanf("%f", &radius);
    float area = pi*radius*radius;
    return(area);
}

void main(){
    int length, breadth;
    const float pi = 22/7;

    int choice;
    printf("\n1_Area of rectangle");
    printf("\n2_Area of Circle");
    printf("\nEnter a choice: ");
    scanf("%d", &choice);
    switch(choice){
        case 1:
            printf("\nArea of Rectangle = %f unit^2", rectArea());
            break;

        case 2:
            printf("\nArea of circle = %f unit^2", circleArea());
            break;

        default:
            printf("\nINVALID INPUT");
    }
}