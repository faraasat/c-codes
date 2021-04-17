#include<stdio.h>

int main(){

    for (int i = 0; i < 8 ; i++)
    {
        printf("%d\n", i);

        for (int j = 0; j < 8; j++)
        {

            int num;
            printf("Please Enter the num, Enter 0 to exit \t");
            scanf("%d", &num);

            if(num == 0){

                goto end;

            }

        }
        
    }
    end:
    printf("Program End!\n");

    return 0;
}