#include<stdio.h>

int main(){

    int m, n, sum = 0;
    int a[3][4], b[4][2], result[3][2];
    printf("Enter Your first matrix:\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            // printf("Enter the %d %d element of first matrix\n",i,j);
            scanf("%d", &a[i][j]);
        }
        
    }
    printf("Enter Your Second matrix:\n");
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            // printf("Enter the %d %d element of first matrix\n",i,j);
            scanf("%d", &b[i][j]);
        }

    }
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 4; k++)
            {
                sum += a[i][k] * b[k][j];
            }
            result[i][j] = sum;
            sum = 0;
        }
        
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

}