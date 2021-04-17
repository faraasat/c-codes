#include<stdio.h>

int func1(int arra[]);
void func2(int* ptr);
void func3(int* ptr);

int main(){

    int arr[] = {1,5,8,3,9,5};
    printf("The value at arr[0] is %d\n",arr[0]);
    func1(arr);
    printf("The value at arr[0] is %d\n",arr[0]);

    int arr2[] = {4,2,9,8,5,7};
    func2(arr2);

    func3(arr2);

    return 0;

}

int func1(int arra[]){
    printf("\n\nFunction 1\n");
    for(int i=0;i<6;i++){
        printf("The value at arr[%d] is %d\n",i,arra[i]);
    }
    arra[0] = 246;
    //if we change any value here it will be reflected in main because array becomes a pointer in function.
}

void func2(int* ptr){
    printf("\n\nFunction 2\n");
    for(int i=0;i<6;i++){
        printf("The value at arr[%d] is %d\n",i,ptr[i]);
    }
}

void func3(int* ptr){
    printf("\n\nFunction 3\n");
    for(int i=0;i<6;i++){
        printf("The value at arr[%d] is %d\n",i,*(ptr+i));
    }
}
