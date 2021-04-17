#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc, char *argv[]){

    char * operation1;
    int num1, num2;
    operation1 = argv[1];
    num1 = atoi(argv[2]);
    num2 = atoi(argv[3]);

   if(strcmp(operation1, "add") == 0){
        printf("%d\n",num1 + num2);
    }
    else if(strcmp(operation1, "sub") == 0){
        printf("%d\n",num1 - num2);
    }
    else if(strcmp(operation1, "mul") == 0){
        printf("%d\n",num1 * num2);
    }
    else if(strcmp(operation1, "div") == 0){
        printf("%d\n",num1 / num2);
    }

    return 0;

}