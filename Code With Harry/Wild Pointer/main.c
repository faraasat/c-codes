#include<stdio.h>

int main(){

    //Uninitialized pointer is known as wild pointer 
    //These pointer point to some arbitary location in memory and may cause a program to crash or behave badly.

    int a = 3;
    int * ptr; //wild pointer
    ptr = &a; //pointer is no longer wild

    return 0;
}