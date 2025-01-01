#include <stdio.h>


int main (){

	double price[] = {2.0, 3.0, 4.0};
	for (int i = 0; i< sizeof(price)/8;i++){
		printf("%.2lf\n", price[i]);
	}

	return 0;
}
