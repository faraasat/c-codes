#include<stdio.h>

int main(){

    int a=2,b=3;
    
    //Operators:
    //----------

    //Bitwise And operator [1&1=1, 1&0=0, 0&0=0]
    printf("a & b = %d\n", a&b);
    // in binary 2 = 10 and 3 = 11 therfore (1 0 & 1 1) = 10 = 2

    //Bitwise Or operator [1|1=1, 1|0=1, 0|0=0]
    printf("a & b = %d\n", a|b);
    // in binary 2 = 10 and 3 = 11 therfore (1 0 | 1 1) = 11 = 3

    //Bitwise Exclusive Or operator [1^1=0, 1^0=1, 0^1=1, 0^0=0]
    //if one value is true and other is false then result will be true
    printf("a & b = %d\n", a^b);
    // in binary 2 = 10 and 3 = 11 therfore (1 0 | 1 1) = 01 = 1

    // '~' is binary one's complement operator
    // '<<' is the binary left shift operator
    // '>>' is the binary right shift operator

    // 'sizeof()' returns the size of a variable
    // '&' returns the address of a variable
    // '*' pointer to a variable
    // '?:' Conditional Expression 

    return 0;
}