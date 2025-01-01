#include <stdio.h>


int main(){
	char string;
	printf("What is your grade: ");
	scanf("%c", &string);

	switch(string){
		case 'A':
			printf("Your grade is the best\n");
			break;

		case 'B':
			printf("Your grade is vaery good\n");
			break;

		case 'C':
			printf("Your grade is ok\n");
			break;

		case 'D':
			printf("Your grade is not so good\n");
			break;

		case 'E':
			printf("Your grade is terrific\n");
			break;

		case 'F':
			printf("Your grade is the very bad\n");
			break;
		default:
			printf("This is not a grade/n");






	}

	return 0;
}
