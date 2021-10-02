#include <stdio.h>

void main(){
    // Integers
    int a = 5; // No special symbol otherthan '_' is allowed in or at the beginning of variable name
    int b = 2;
    int c = a + b;
    printf("%d\n", c); // We write %d to print the integers

    // \n is escaping sequence character for new line
    // \t is escaping sequence character for tab

    // Characters
    char c1 = 'a'; // It should always be in single quotes i.e. ''
    printf("%d\n", c1); // This prints ASCII value of the character
    printf("%c\n", c1); // We write %c to print the characters

    // Float
    float f1 = 18.19;
    printf("%f", f1); // %f for float

    // Constants
    /*
    1 - Integer constant: e.g. 1, 3, -4,...
    2 - Real Constant: e.g. 32.55, 2.5, 312.1,...
    3 - Character Constant: e.g. 't', 'l', 'a',...
    */
    const int const1 = 5;
    const float const2 = 5.55;
    const char const3 = 'a';
    printf("\nInt Const.: %d\nReal Const.: %f\nChar Const.: %d", const1, const2, const3); // We write like this for printing multiple vars
    // z1 = 7; // error
}