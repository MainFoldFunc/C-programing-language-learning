#include <stdio.h>

int main (){
	float x = 2.0;
	float y = 3.0;

	float score_sum = x + y;
	float score_sub = x - y;
	float score_mul = x * y;
	float score_div = x / y;

	printf("Variables are:\nx = %.2f y = %.2f\n", x, y);
	printf("%.2f\n", score_sum);
	printf("%.2f\n", score_sub);
	printf("%.2f\n", score_mul);
	printf("%.2f\n", score_div);
	
	return 0;
}
