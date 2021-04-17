#include<stdio.h>

typedef struct student{
    int id;
    int marks;
    char fav_char;
    char name[40];
} std;

int main(){

    //typedef <previous_name> <alias name>;

    // typedef unsigned long ul;
    // ul aj = 11;
    // typedef int integer;
    // integer a=4;

    std s1, s2;

    s1.id = 56;
    s2.id = 89;

    printf("value of a1 and s2 is %d and %d\n",s1.id,s2.id);

    int* a, b; //here only a is became pointer
    int c = 89;
    a = &c;
    b = c;

    typedef int* intptr;
    intptr d, e; //now both have became pointers
    d = &c;
    e = &c;

    return 0;
}