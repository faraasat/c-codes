#include<stdio.h>

float myConverter(float userVal);

int main(){

    float usVal;

    do{
        printf("Enter a Number to convert it from inches to feet or '-1' to exit\t");
        scanf("%f", &usVal);
        if(usVal == -1){
            break;
        }
        float c = myConverter(usVal);
        printf("%f\n",c);
    }while(usVal);
    printf("Good Bye!\n");

}

float myConverter(float userVal){
    float myInch;
    myInch = userVal / 12;
    return myInch;
}