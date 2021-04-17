#include<stdio.h>

int main(){

    //Null pointer is a pointer which has a value reserved for indicating that the pointer or refernce does not refer to a valid object.
    //int x = 10;
    //int *p = NULL; => nul pointer and cannot be dereferenced
    //p = &x; => null pointer now holds address of int x and can be dereferenced
    //NULL macro is defined as ((void *)0) in header files of most of the C compiler implementations.
    //NULL pointer vs Uninitialized pointer -- An uninitialized pointer contains an undefined value.
    //A NULL pointer stores a defined value, which one is the one decided by the environment to not to be a valid memory address of an object.
    //NULL pointer is a value whereas void pointer is a type.

    int a = 34;
    int * ptr = NULL; 
    printf("The address of a is %d\n", ptr);
    printf("The address of a is %d\n", *ptr);//here program will crash because null pointer cannot be dereferenced.

    return 0;
}