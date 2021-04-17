#include<stdio.h>

int main(){

    int a = 3;
    float b = 54/5; //This will give answer 10 but the annswer should be 10.something beacause 54 and 5 are both integer so they will return an integer value.
    float c = (float) 54/5; //this is typecasting and convert integer into float.

    printf("%f\n", b);
    printf("%f\n", c);

}