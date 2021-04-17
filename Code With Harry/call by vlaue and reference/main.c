#include<stdio.h>

void changeValue(int* address);

int main(){

	int a = 34, b = 56;
	printf("The value of a is %d\n", a);

	//After Changing Value
	changeValue(&a);
	printf("The value of a is now: %d\n", a);

	return 0;
}

void changeValue(int* address){

	*address = 345;

}