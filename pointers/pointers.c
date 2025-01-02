#include <stdio.h>

void printage(int *age){
	printf("You are %d", *age);
}


int main (){
	/*	
	int x = 5;
	int *px = &x;

	printf("Pointer to x is: *%p\n", px);
	printf("A value of this pointer is: %d\n", *px);
	*/
	int age = 18;
	int *page = &age;
	printage(page);
	return 0;


}
