#include<stdio.h>

int main(){

    //Four phases of C program to become executeable file
    //1. PreProcessing:
        //Removal of comments, expansion of macros & expansion of include file
    //2. Compilation file:
        //Assembly level instruction are generated.
    //3. Assembly:
        //Assemvly level language are converted to Machine Code but it donot resolve functions
    //Linker:
        //Links the function Implementation.

    //Preproceesor come under action before the actual compilation fies.
    //C processor are not part of C compilation.
    //It is a text substitution tool.
    //All preprocessor commands begin with a hash symbol.

    //Preprocessor Commands Examples:
    //#define
    // #include
    // #undef //To undefine a macro
    // #ifdef //check if macro define
    // #ifndef //Check if macro defined
    // #if //If any compile time condition is true
    // #else //Comes after if
    // #elif //Else if

    return 0;
}