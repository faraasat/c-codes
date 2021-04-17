#include <stdio.h>

int b = 34; //global variable

int func1(int b1)// the address of this argument is different than the argument passed in func1 in main()
{
    static int myVar = 0; //static variable remeber its value i.e. it is initialized with 0 first time but when it comes again to this then it remember its previous value which is 1 after increment
    printf("The value of myVar is: %d\n", myVar);
    myVar++;
    return b1 + myVar;
}

int main()
{

    int b = 344;
    int val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    val = func1(b);
    printf("The value of func1 is: %d", val);

    return 0;
}