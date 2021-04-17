#include<stdio.h>
#include<string.h>
#include <stdlib.h>

int main(){

    int chars, i = 0;
    char *ptr;
    char a, b;

    while(i < 3){
        printf("\nEnter the number of characters in your employee %d ID:\n", i+1);
        scanf("%d", &chars);
        printf("Enter Valiue of a\n");
        getch();
        scanf("%c", &a);
        printf("Enter Valiue of b\n");
        getch();
        scanf("%c", &b);
        ptr = (char *) malloc((chars+1)*sizeof(char));
        printf("Enter your Employee ID:\n");
        scanf("%s", ptr);
        printf("Your Employee ID is: %s", ptr);
        free(ptr);
        i++;
    }

    return 0;
}