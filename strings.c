#include <stdio.h>
#include <string.h>

// String is 1D character array terminated by '\0' (null character)
// If my string is Ayush
// 'A' 'Y' 'U' 'S' 'H' '\0'
//  0   1   2   3   4   5
// 1 character is 1 bite
// NOTE: '\0' is a single character

void main(){
    // char str[6] = {'A', 'y', 'u', 's', 'h', '\0'}; // 6 characters
    char str1[] = {'A', 'y', 'u', 's', 'h', '\0'};
    char str2[] = "Ayush"; // Automatically adds '\0'
    printf("%s\n", str1);
    printf("%s\n", str2);

    // Create a string using "", but print it using for loop
    char str3[] = "myString";
    for (int i = 0; i < 9; i++)
    {
        printf("%c", str3[i]);
    }

    // String input
    char str4[10];
    printf("\nEnter your name: ");
    scanf("%s", str4);
    printf("Your name is %s", str4);

    // The string should fit into the array
    // scanf() cannot be used to input multiple words string having spaces
    // for that we use gets()
    char myStr[46];
    printf("\nEnter your name: ");
    getchar(); // This is added as gets was not working and was skipped due to any previously added \n
    gets(myStr); // fgets() is also a function to scan string
    // puts() will print the string and put the cursor on next line
    puts(myStr);

    // Strings with pointers
    char *ptr = "Ayush"; // ptr will store the address of the first character in this character array
    // If string is initialized using 'char str[] = "myString";, it cannot be reinitialized to something else
    // But, a string defined using pointers can be reinitialized
    ptr = "Jaimit";
    // common standard library functions
    // 1. strlen()
    int str2Len = strlen(str2); // no. of characters excluding '\0'
    printf("Length of '%s' is %d\n", str2, str2Len);
    // 2. strcpy()
    char source[] = "Ayush";
    char target[46]; // The length of the array should be such that it can contain another string
    strcpy(target, source);
    printf("Target = '%s'\n", target);
    // 3. strcap()
    strcat(str1, str2); // The concatenated string value will be assigned to str1
    printf("Concatenation of str1 and str2 is %s\n", str1);
    // 4. strcmp()
    // returns 0 if two strings are equal
    // returns -ve value if first string's mismatching character's ASCII value is not greater than second string's corresponding mismatching character, otherwise +ve value
    printf("%d\n", strcmp("for", "joke"));
    printf("%d\n", strcmp("joke", "for"));
    printf("%d\n", strcmp("joke", "joke"));
}