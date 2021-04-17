#include<stdio.h>

int isPalindrome(int num){

    int reversed = 0;
    int oNum = num;

    while(num != 0){
       reversed = reversed * 10 + num % 10;
       num = num / 10;
    }
    if(oNum == reversed){
        return 1;
    }
    else{
        return 0;
    }

}

int main(){

    int number;
    printf("Enter a number to check whether it is a palindrome or not:\n");
    scanf("%d", &number);
    if(isPalindrome(number)){
        printf("This number is a palindrome\n");
    }
    else{
        printf("This number is not a palindrome\n");
    }

    return 0;
}