#include<stdio.h>
#include<string.h>

union student{
    int id;
    int marks;
    char fav_char;
    char name[34];
};

int main(){

    union student s1;
    s1.marks = 45; // if we put marks at last then it will be stored and all other are corrupted 
    s1.id = 1;
    s1.fav_char = 'u';
    strcpy(s1.name, "potter"); // the name at last will be stored while all above will be corrupted

    printf("id is %d\n", s1.id);
    printf("marks is %d\n", s1.marks);
    printf("fav_char is %c\n", s1.fav_char);
    printf("name is %s\n", s1.name);

}