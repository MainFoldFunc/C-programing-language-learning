#include <stdio.h>

// Function declarations with correct types
float adding(float x1, float x2) {
    return x1 + x2;
}

float subtract(float x1, float x2) {
    return x1 - x2;
}

float multi(float x1, float x2) {
    return x1 * x2;
}

float division(float x1, float x2) {
    if (x2 != 0) {
        return x1 / x2;
    } else {
        printf("Error: Division by zero is not allowed.\n");
        return 0; // Returning 0 to indicate an error
    }
}

int main() {
    float x1, x2;
    char sign;

    // Input for numbers
    printf("Number 1: ");
    scanf("%f", &x1);

    printf("Number 2: ");
    scanf("%f", &x2);

    getchar(); // Consume leftover newline

    // Input for the operator
    printf("Sign: ");
    scanf("%c", &sign);

    float res = 0; // Variable to store the result

    switch (sign) {
        case '+':
            res = adding(x1, x2);
            break;
        case '-':
            res = subtract(x1, x2);
            break;
        case '*':
            res = multi(x1, x2);
            break;
        case '/':
            res = division(x1, x2);
            break;
        default:
            printf("Error: Invalid operator.\n");
            return 1; // Exit the program with error
    }

    // Print the result if no error occurred
    printf("\nResult: %.2f\n", res);

    return 0;
}

