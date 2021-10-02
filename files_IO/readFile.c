#include <stdio.h>

int main()
{
    FILE *ptr; // FILE pointer
    ptr = fopen("sampleFile.txt", "r");
    // modes of opening files:-
    /*
        r - open for reading - returns NULL if file does not exist
        rb - open for reading in binary - returns NULL if file does not exist
        w - open for writing - overwrites contents if file exists
        wb - open for writing in binary - overwrites contents if file exists
        a - open for appending - file will be created if file does not exist
    */
    // Types of files
    // Text File (.txt, .c, etc.)
    // Binary File (.jpg, .dat, etc.)
    char ch;
    fscanf(ptr, "%c", &ch); // Reading one character of file into ch
    printf("%c\n", ch);
    // Like this, we can also read an integer or any other thing e.g. if file has a number and then space, int can be read

    // fgetc(ptr) // This will give a character from the file
    // Doing this again and again will read further characters of the file

    // EOF (End of the file)
    // fgetc returns EOF when all the characters from a file have been read
    while(1){
        ch = fgetc(ptr);
        if(ch == EOF)
            break; // PRO-TIP: For single line if-else conditions, no {} needed
    }

    fclose(ptr); // Closing the file

    return 0;
}