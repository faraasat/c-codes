#include<stdio.h>

int takeNum();

int main(){

    int c = takeNum();
    printf("%d\n",c);

    return 0;
}

int takeNum(){

    int i;
    printf("Enter a num:\t");
    scanf("%d",&i);
    return i;

}