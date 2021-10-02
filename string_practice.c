#include <stdio.h>
#include <string.h>

int myStrlen(char*);

void main(){
    // Write a program to take string as an input from the user using %c and %s. Confirm that the strings are equal.
    char str1[6];
    printf("Enter letters of string for percent s: ");
    for(int i=0; i<5; i++){
        scanf("%c", &str1[i]);
        // if we keep only scanf here, when we press enter key after every scanf the enter key's \n is taken by the next character and thus it stops us after 3 characters
        // so scanf inside any loop, we write this:
        fflush(stdin); // This will flush the enter key
    }
    str1[5] = '\0';
    char str2[6];
    printf("Enter string for percent s: ");
    scanf("%s", str2);
    str2[5] = '\0';
    if(strcmp(str1, str2) == 0){
        printf("Both the strings are equal\n");
    }
    else{
        printf("Both the strings are different\n");
    }

    // Write your version of strlen() function from <string.h>
    char myStr[] = "String";
    printf("Length of %s = %d\n", myStr, myStrlen(myStr));

    // Write your own version of strcpy function from <string.h>
    char myStr2[] = "poorrooru";
    char myStr3[10];
    printf("Copied value of myStr2 to myStr3: ");
    for(int i=0; i<9; i++){
        myStr3[i] = myStr2[i];
        printf("%c", myStr3[i]);
    }
    
    // Write a program to encrypt a string by adding 1 to the ASCII value of its characters
    char name[] = "Ayush";
    for (int i = 0; i < 5; i++)
    {
        name[i] ++;
    }
    printf("\nThe encrypted string is: %s\n", name);

    // Write a program to decrypt the string encrypted in using encrypt function in previous problem
    for (int i = 0; i < 5; i++)
    {
        name[i] --;
    }
    printf("The encrypted string is: %s\n", name);
}

int myStrlen(char* str){
    char* ptr = str;
    int length = 0;
    while(*ptr!='\0'){
        length++;
        ptr++;
    }
    return length;
}