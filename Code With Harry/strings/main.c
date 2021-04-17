#include<stdio.h>

void printStr(char str[]);
void printStr2(char str[]);
void printStr3(char str[]);
void printStr4(char str[]);

int main(){

    //char name[] = "harry"; if we use "" then we donot require \0
    //char name[] = {'h','a','r','r','y','\0'}; if we make array of char we have to use \0

    char str[] = {'h','a','r','r','y','\0'};
    printStr(str);

    char str2[] = {'h','a','r','r','y'};
    printStr2(str2);

    char str3[5] = "harry"; //this will give a wrong value because it has one less value to use terminator, we have to give one value greater than the length of array

    char str4[34];
    printf("Enter String:\t");
    gets(str4);
    //using custom function
    printStr4(str4);
    //using printf
    printf("%s\n",str4);
    //using puts
    puts(str4);

    return 0;
}

void printStr(char str[]){
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}

void printStr2(char str[]){
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}

void printStr3(char str[]){
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}

void printStr4(char str[]){
    int i=0;
    while(str[i]!='\0'){
        printf("%c",str[i]);
        i++;
    }
    printf("\n");
}