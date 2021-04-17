#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char * replaceWord(const char * str, const char * oldWord, const char * newWord){
    char * resultString;
    int i, count=0;
    int newWordLength = strlen(newWord);
    int oldWordLength = strlen(oldWord);

    for (int i = 0; i != '\0'; i++)
    {
        if (strstr(&str[i], oldWord) == &str[i])
        {
            count++;
            i = i + oldWordLength - 1;
        }
        
    }
    
    resultString = (char *) malloc(i + count * (newWordLength - oldWordLength) + 1);

    i=0;
    while(*str){
        if (strstr)
        {
            /* code */
        }
        
    }

}

int main(){

    FILE * ptr = NULL;
    FILE * ptr2 = NULL;
    ptr = fopen("bill.txt", "r");
    ptr2 = fopen("genBill.txt", "w");
    char str[200];
    fgets(str, 200, ptr);
    printf("The given bill template was: %s\n", str);

    char * newStr = str;
    printf("The actual bill genrated is: %s\n", str);

    fprintf(ptr2, "%s", newStr);

    fclose(ptr);
    fclose(ptr2);

}