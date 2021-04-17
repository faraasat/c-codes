#include<stdio.h>
#define PI 3.142 //we also cannot alter this value, it is also a preprocessor value.

int main(){

    //Operator:
    //---------

    const float b = 2423; //it will become constant we cannot alter the value.
    printf("%f", PI);

    //Escape Sequences:
    //-----------------

    // '\a' for Alarm or Beep.
    // '\b' for Backspace.
    // '\f' for Form Feed.
    // '\n' for New Line.
    // '\r' for Carriage Return.
    // '\t' for (Horizontal) Tab.
    // '\v' for (Vertcal) Tab.
    // '\\' for Backslash.
    // '\'' for Single Quotes.
    // '\"' for Doble Qoutes.
    // '\?' for Question Mark.
    // '\nnn' for Octal Number.
    // '\xhh' for Hexadecimal Number.
    // '\0' for Null.

    //Comments:
    //---------

    // '//' for single line comments.
    // '/* */' for multiple line comments.

    return 0;
}