#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("sampleFile.txt", "w");
    fprintf(file, "%s", "This is written in this file by c program :)");
    // fputc('t', ptr) // This will put a character to the file
    fclose(file);
    return 0;
}
