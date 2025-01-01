#include <stdio.h>

int main() {
    float x;
    float y;
    char sign;

    printf("What should x be: ");
    scanf("%f", &x);

    printf("What should y be: ");
    scanf("%f", &y);

    // Consume the leftover newline character
    getchar();

    printf("What should sign be: ");
    scanf("%c", &sign);

    if (sign == '+') {
        float res = x + y;
        printf("Result is: %.2f\n", res);
    } else if (sign == '-') {
        float res = x - y;
        printf("Result is: %.2f\n", res);
    } else if (sign == '*') {
        float res = x * y;
        printf("Result is: %.2f\n", res);
    } else if (sign == '/') {
        if (y != 0) { // Check for division by zero
            float res = x / y;
            printf("Result is: %.2f\n", res);
        } else {
            printf("Error: Division by zero is not allowed.\n");
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}

