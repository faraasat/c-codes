#include<stdio.h>
#include<stdlib.h>

// int *myFunc(){
//     //a is local variable and goes out of scope on function return over.
//     int a = 34;
//     return &a;
// }

int * functionDangling()
{
    int a, b, sum;
    a = 34;
    b = 364;
    sum = a + b;
    return &sum;
}

int main(){

    //A pointer pointing to a freed memory location or the location whose content has been deleted is called a dangling pointer.
    //Dangling pointers arise during object destruction when an object that has an incoming reference is deleted or deallocated, without modifying the value of pointer, so that the pointer still points to a memory location of the deallocated memory.

    //Causes of Dangling pointer:
    //---------------------------

    // 1. Deallocation of memory:
    // char *str = "Hi Harry ";
    // int a;
    // int *ptr = (int *) malloc(sizeof(int));
    // free(ptr); //ptr noe becomes a dangling pointer 
    // ptr = NULL; //ptr no longer dangling

    //2. Returning local variable in function calls:
    // int *ptr1 = myFunc(); //ptr points to invalid location.
    // printf("%d", *ptr1);

    //3. Variable going out of scope:
    // int *ptr2;
    // {//scope starts
    //     int i = 0;
    //     ptr2 = &i; //ptr points to an invalid location.
    // }//scope ends
    // //ptr is now a dangling pointer
    // printf("%d", *ptr2);

    //We can avoid issues caused by dangling pointersby initisllizing pointer to NULL

    //case 1:
    int *ptr = (int *) malloc(7 * sizeof(int));
    ptr[0] = 12;
    ptr[1] = 34;
    ptr[2] = 21;
    ptr[3] = 52;
    ptr[4] = 30;

    free(ptr); //ptr is now dangling pointer

    // case 2: 
    int * dangPtr = functionDangling(); //dangPtr is now dangling pointer

    //Case 2:
    int * danglingPtr3;
    {
        int a = 34;
        danglingPtr3 = a;
    }
    // Here variable a goes out of scope

    return 0;
}