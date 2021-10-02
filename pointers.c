#include <stdio.h>

void main(){
    int i = 72; // This has some address in the memory(RAM), 4 bites in memory are reserved for int
    // It can start the address from any row in the RAM, e.g. 6422300
    // We can have another variable j which stores the address of i, it will not be int, it will be integer pointer
    // j's address may be something else but not between 6422300 and 6422304 as that's reserved by i
    // j points to i

    // "Address of (&)" operator used to obtain address of given variable
    // e.g. in scanf() function also
    // printf("Address of i is %u", &i);

    // "Value Address (*)" operator used to obtain the value present at given memory address
    // *(&i);
    // printf("\n*(&i) = %d", *(&i));

    // How computer memory works: http://www.mathcs.emory.edu/~cheung/Courses/255/Syllabus/4-intro/memory.html

    // Declaration of pointer
    // int j = &i; => j stores integer
    int *j = &i; // => j stores address, this * is not value address operator
    // points to integer
    // char *char-ptr; points to character
    // float *ft.ptr; points to float
    printf("\nValue of i is %d", *j);
    printf("\nValue of i is %d", i);
    printf("\nValue of i is %d", *(&j));
    printf("\nAddress of i is %u", j);
    printf("\nAddress of i is %u", &i);
    printf("\nAddress of j is %u", &j);

    // Pointer to a pointer
    int **k; // Like this, we can keep on adding pointers for pointers by adding *s
    k = &j;
    printf("\nAddress of j is %u", k);

    // Functions
    // Call by Value
    // in callByValue.c
    // Call by reference
    // in callByReference.c
}