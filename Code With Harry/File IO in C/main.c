#include<stdio.h>

int main(){

    FILE *ptr = NULL;
    char mystring[34] = "this is a good content";

    //reading a file
    // ptr = fopen("myfile.txt", "r");
    // fscanf(ptr, "%s", mystring);
    // printf("The Content of this file has %s", mystring);
    // fclose(ptr);

    //writing a file
    // ptr = fopen("myfile.txt", "w");
    // fprintf(ptr, "%s\n", mystring);

    //appending a file
    ptr = fopen("myfile.txt", "a");
    fprintf(ptr, "%s\n", mystring);

    return 0;
}