#include<stdio.h>

int main(){

    int a = 8;
    float b = 7.3333;
    printf("%8.4f\n",b);
    // "%8.4f" means take space of 8 characters and .4 means give number(.3333) a precision of 4 signficant digits since total lenth of number is 6 therefore the two remaining character space will be converted into white space before number.
    printf("%-8.4f\n",b);
    //here due o minus sign it will leave space after the number.

    // '%c' to print a charcter.
    // '%d' to print an integer.
    // '%f' to print a float.
    // '%l' to print a long.
    // '%lf' to print double.
    // '%LF' to print long double.

    return 0;
}