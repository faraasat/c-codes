#include<stdio.h>

int main(){

    //Modes of writing a file in C:
    //-----------------------------
    //r //Open an existing text file for reading.
    //w //Opens a file for writing. If it doesnot exist, then a new file is created. Writing starts from the beginning of the file.
    //a //Opens a text file for writing in appending mode. If doesnot exist, then a new file is created. The program will start appending content to the existing file content.
    //r+ //This mode open a text file for both reading and writing.
    //w+ //Opens a text file for both reading and writing. It first truncates the file to zero length if it exists, otherwise creates a file if it doesnot exist.
    //a+ //Opens a text file for both reading and writing. It creates the file if it doesnot exist. The reading wil start from the beginning but writing can only append to file.

    //Other I/O functions:
    //--------------------
    //There are various functions provided by C standard library to read and write a file, character by character, or in the form of a fixed length string.
    //Some of them are:
    //fputc //Simplest function to write a character to a file.
        //int fputc(character, FILE pointer) //It writes character in the form of integer and on reading we can type cast it.
        //On failure to write it returns EOF.
    //fputs //It is used to write a null terminated string to a file.
        //int puts(const char *s, FILE *fp);
    //fgetc //Simplest function to read a character to a file.
        //int getc(FILE *fp);
    //fgets //It is used to read a null terminated string from a file.
        //int fgets(const char *s, int n, FILE *fp); //here int n is the number of characters. For three character we have to give n = 4 because it also put a null terminated character at the end.

    FILE *ptr = NULL;
    ptr = fopen("myFile.txt", "r");
    char c = fgetc(ptr);
    printf("The character I read was %c\n", c);
    c = fgetc(ptr);
    printf("The character I read was %c\n", c);
    fclose(ptr);

    FILE *ptr1 = NULL;
    ptr = fopen("myFile.txt", "r");
    char str[4];
    fgets(str, 3, ptr1);
    printf("The String I read was %s\n", str);
    fclose(ptr1);

    FILE *ptr2 = NULL;
    ptr2 = fopen("myFile.txt", "r");
    fputc('o', ptr2);
    fclose(ptr2);

    return 0;
}