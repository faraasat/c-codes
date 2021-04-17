#include<stdio.h>
#define PI 3.14
#define SQUARE(r) r*r //macro

int main(){

    //The #include directive causes the preprocessor to fetch the contents of some other file to be included in the present file.
    //Most commonly the #include files have a .h extension, indicating that they are header files.
    //In header file only promises (prototype declaration of function).
    //In C programming there are two common formats for #includes:
        //#include<headerFile.h> //The angle brackets say to look in the standard system directories.
        //#include "myfile.h" //The quotation marks say to look in the current directory.
    //Didk drive full path is allowed, but discouraged since it is not too portable.
        //#include <C:\Program Files\Harry\SomeFile.h> //Too specific
        //#include <sys/file.h> //Relative and porable path to the standard locations.

    //#define directive is used to "define" preprocessor "Variables".
    //The #define processor directive cna be used to globally replace a word with number.

    //#define directive can be used for debugging.
    //We can have printing statements that we only want active when debuggig.
    //We can "protect" them in a "ifdef" block as follows:
    /*
        #define DEBUG
            #ifdef DEBUG
                [statements..]
            #endif
        #undef DEBUG
    */
   //We can also create macros using #define
   //Macros operate much like functions, but they are expanded in place and are generally faster.

    //when we add our own file a warning comes that there are two main() so we change the name of main of headerfile.

    float var = PI;
    printf("%f", var);
    int r = 4;
    printf("\nThe area of circle is: %f\n", PI * SQUARE(r));
    return 0;
}