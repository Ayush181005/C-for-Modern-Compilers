#include <stdio.h>
#include <malloc.h>

void main(){
    // C has many rules, one of them is that you cannot change the size of an array as the memory is alocated before running
    // That's why we sometimes need dynamic memory
    // Dynamic memory is the memory we donot know what memory will be used before runtime, e.g. it can be given by the user input
    // It is the memory allocated during runtime
    // Dynamic Memory Allocation: way to allocate memory to a data structure during the runtime.

    // To see how this is working, see 'memory layout in C' in google - https://media.geeksforgeeks.org/wp-content/uploads/memoryLayoutC.jpg

    // Functions for DMA
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // 1. malloc() - memory allocation
    // If the space is not suffiecient, memory allocation fails and returns NULL pointer same
    int * ptr;
    // ptr = (int *) malloc(30 * sizeof(int)); // malloc will return bites consumed by 30 integers here
    int n;
    printf("Enter size of array you want: ");
    scanf("%d", &n);
    ptr = (int *) malloc(n * sizeof(int)); // malloc will return bites consumed by 30 integers here
    // int i[n]; // this is not valid and will give error
    ptr[0] = 18; // It can now be used as an array, This array is not inside stack, it is inside the heap
    ptr[1] = 19; // ... we can go till ptr[29] like this
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // 2. calloc() - contiguous memory allocation
    // It initiates each memory block with a default value of 0
    // ptr = (float *) calloc(30 * sizeof(float)); // allocates contiguous space in memory for 30 blocks(floats)
    int *arr;
    arr = (int *) calloc(n, sizeof(int));
    printf("Calloc's default value to arr[0]: %d\n", arr[0]);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // 3. free() - free memory in the heap
    // Used to deallocate the memory
    free(ptr); // memory of ptr is released
    free(arr);
    ////////////////////////////////////////////////////////////////////////////////////////////////////////////
    // realloc() - reallocate memory
    // used to allocate memory of new size using the previous pointer and size
    ptr = realloc(ptr, 3*sizeof(int));
}