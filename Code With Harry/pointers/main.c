#include<stdio.h>

int main(){

    int a = 9;
    int *ptr = &a;
    printf("The value of a is: %d\n", a);
    printf("The value of a is: %d\n", *ptr);
    printf("The path of a is: %p\n", &a);
    printf("The path of a is: %p\n", ptr);
    printf("The path of a is: %x\n", ptr); //in hexadecimal format
    printf("The path of a is: %c\n", ptr); 
    printf("The path of a is: %u\n", ptr); 

    int *ptr2;
    printf("The path of garbage is: %p\n", ptr2);

    int *ptr3 = NULL;
    printf("The path of NULL is: %p\n", ptr3);

    return 0;
}

