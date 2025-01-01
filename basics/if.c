#include <stdio.h>


int main (){

	int age;

	printf("What is your age: ");
	scanf("%d", &age);

	if (age < 0){
		printf("Invalid data.\n");
	}
	else if (age < 18){
		printf("You can't drink beer");
	}
	else{
		printf("You can drink beer");
	}
	return 0;
}
