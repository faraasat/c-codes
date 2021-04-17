#include<stdio.h>
#include<stdlib.h>

int main(){

    int* ptr;
    int n;

    //malloc()
    ptr = (int*) malloc(n*sizeof(int));
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Enter the value number %d of this array \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The value number %d of this array is: %d\n", i+1, ptr[i]);
    }

    //calloc():
    ptr = (int*) calloc(n, sizeof(int));
    printf("Enter the size of array:\n");
    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        printf("Enter the value number %d of this array \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The value number %d of this array is: %d\n", i+1, ptr[i]);
    }

    //realloc():
    printf("Enter the size of new array:\n");
    scanf("%d", &n);
    ptr = (int*) realloc(ptr, n*sizeof(int));
    for(int i = 0; i < n; i++){
        printf("Enter the value number %d of this array \n", i+1);
        scanf("%d", &ptr[i]);
    }
    for(int i = 0; i < n; i++){
        printf("The value number %d of this array is: %d\n", i+1, ptr[i]);
    }

    //free()
    free(ptr);

    return 0;
}

// int myFunc(){
//     /*Function for dynamic memory allocation */
//         malloc(); //=> stand for memory allocation
//             int *ptr;
//             ptr = (int*) malloc(3*sizeof(int));
//             //if memory allocation fails due to insufficient space than it returns a null pointer and all values are allocated memory is initialized to garbage value.
//         calloc(); //=> stands for contigous allocation
//             int *ptr;
//             ptr = (int*) calloc(/*no of block , size of block*/);
//             //if memory allocation fails due to insufficient space than it returns a null pointer and all values are allocated memory is initialized to zero.
//         realloc(); //stands for realloction
//             int *ptr;
//             ptr = (int*) realloc(ptr, /*new size in bytes*/);
//             //if allocated memory is insufficient we can change the size of previously allocated memory
//         free(); //used to free allocated memory
//             free(ptr);
// }