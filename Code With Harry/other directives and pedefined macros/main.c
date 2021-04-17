#include<stdio.h>

int main(){

    //#undef => undefines a macro.
    //#ifdef => Return true if macro is defined
    //#ifndef => if not defined then it will true
    //#if => 
    //#else =>
    //#elif =>
    //#pragma => To issue some special comands to compiler.
    /*
    Predifined macros:
    ------------------
        __DATE__ => //The current date in character literal in "MMM DD YYYY" format.
        __TIME__ => //This contain the current time as literal in "HH:MM:SS" format.
        __FILE__ => //The current filename as a string literal.
        __LINE__ => //The current line number as a decimal constant.
        __STDC__ => Define as I(One) whenthe compiler compiles with the ANSI standard.
    */

   printf("File name is %s\n", __FILE__);
   printf("Todays Date is %s\n", __DATE__);
   printf("Time now is %s\n", __TIME__);
   printf("Line No is %d\n", __LINE__);
   printf("ANSI Standard is %d\n", __STDC__);

   return 0;
}