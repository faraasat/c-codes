#include<stdio.h>

int factorial(int number);

int main(){

    int num;
    printf("Enter a number for factorial:\n");
    scanf("%d\n", &num);
    printf("Factorial of %d is: %d\n",num,factorial(num));

}

int factorial(int number){
    if(number == 1 || number ==0){
        return 1;
    }
    else{
        return (number * factorial(number - 1));
    }
}