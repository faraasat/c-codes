#include<stdio.h>
#include "temp.c" //TO use Extern variable in it

int main(){

    //storge class defines
    //Scope
    //Default initial value
    //Lifetime

    //Automatic Variables:Auto Storage Class(default class) (Local Variables)
    //Local Scope
    //Garbage value
    //Lifetime is till end of the function block they are defined
    int harry; /*---and---*/ auto int jarry; /* are same*/

    //External Storage Class (Global Variables)
    //Global Scope
    //initial value: 0
    //they are avaiable throughout the end of the program

    //External Variable:Externvariable
    //extern keyword is used to inform our C compiler that a given variable is declared somewhere else.
    //Using extern will not allocate space for variables

    //Static Variables: Static Storage Class
    //Local to the block
    //initial value: 0
    //througout the program
    static int karry;

    //Register Variable: Register Storage Class
    //local to the function
    //Garbage Value
    //available throught the end of the function in which defined

    extern int sum; // to use global variable anywhere
    printf("The Sum is: %d", sum);

    register int myVar = 20;// to store in register

    return 0;
}