#include<stdio.h>
#include<string.h>

int main(){

    //Void pointer is a pointer that has no data type associated with it.
    //Void pointer can easily typecased to any pointer.
    // int x = 10;
    // char y = 'x';
    // void *p = &x;
    // p = &y;
    //In dynamic memory allocation, malloc() and calloc() return (void *) type pointer.
    //It is not possible to dereference void pointers.
    //Pointer arithematic is not allowed in C standards with void pointer.

    int a = 345;
    float b = 8.3;
    void *ptr;
    ptr = &a;
    printf("The value is %d\n", *((int *) ptr ));
    ptr = &b;
    printf("The value is %f\n", *((float *) ptr ));

    return 0;
}