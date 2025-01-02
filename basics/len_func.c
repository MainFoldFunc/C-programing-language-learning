#include <stdio.h>

#define LEN(arr) (sizeof(arr) / (sizeof(arr[0])))

int main (){
	int prices[] = {1, 2, 3, 4, 5};
	for (int i = 0; i < LEN(prices);i++){
		printf("This is the %d element of this arr: %d\n", i + 1, prices[i]);

	}


	return 0;
}
