#include<stdio.h>

void starPattern(int rows){

    for(int i = 0; i < rows; i++){

        for(int j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");
    }

}

void reversePatt(int rows){

    for(int i = 0; i < rows; i++){

        for(int j = 0; j <= rows-i-1; j++){
            printf("*");
        }
        printf("\n");
    }

}

int main(){

    int rows;
    printf("How Many Rows to print?");
    scanf("%d", &rows);
    starPattern(rows);
    reversePatt(rows);

    return 0;
}