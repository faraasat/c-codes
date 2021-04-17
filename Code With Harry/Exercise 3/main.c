#include <stdio.h>

int main()
{

    int i;
    printf("Enter a value to print stars:\t");
    scanf("%d", &i);

     for (int j = 0; j < i; j++)
    {
        for(int k = i; k < j; k--){
            printf("*");
        }
        printf("\n");
    }
   
    for (int j = 0; j < i; j++)
    {
        for(int k = 0; k <= j; k++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}