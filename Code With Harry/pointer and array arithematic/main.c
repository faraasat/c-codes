#include<stdio.h>

int main(){

    //Pointer Arithematic:
    //-------------------

    int a =34;
    int* ptr = &a;
    printf("int ptr before addition %d\n", ptr);
    printf("int ptr after addition %d\n\n", ptr+1); // it will add 4 beacuse int has four bytes.

    char b =34;
    char* ptrb = &b;
    printf("ptr before addition %d\n", ptrb);
    printf("ptr after addition %d\n", ptrb+1); // it will add 1 beacuse char has one bytes.

    //Pointer and Array:
    //------------------

    //arr[i] = *(arr+i)
    //if arr is pointer to arr[0] then arr+i is a pointer to arr[i].

    int arr[] = {1,3,6,2,8,9,3};
    printf("Value of array at zero %d\n", arr[0]);
    printf("Address of array at zero %d\n", &arr[0]);
    printf("Address of array at zero %d\n\n", arr);

    printf("Value of array at two %d\n", arr[2]);
    printf("Address of array at two %d\n", &arr[2]);
    printf("Address of array at two %d\n", arr + 2);

    printf("value of Address of array at two %d\n", *(&arr[2]));
    printf("value of Address of array at two %d\n", *(arr + 2));

    //we cannot directly alter array arithematic i.e. arr++ but we can do this by making a pointer of array and then doing this. int *pa = arr; pa++;

    return 0;
}