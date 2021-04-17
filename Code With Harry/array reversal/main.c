#include<stdio.h>

void arrayRev(int arr[]){

    for (int i = 0; i < 6/2; i++){

        int temp = arr[i];
        arr[i] = arr[5-i];
        arr[5-i] = temp;

    }

}

int main(){

    int arr[] = {1,2,3,4,5,6};
    printf("Array before Reversing: \n");
    for(int i = 0; i < 6; i++){
        printf("%d ",arr[i]);
    }

    arrayRev(arr);
    printf("\nArray after Reversing: \n");
    for(int i = 0; i < 6; i++){
        printf("%d ",arr[i]);
    }

    return 0;
}