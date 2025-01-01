#include <stdio.h>
#include <stdbool.h> // Needed for the bool type

int main() {
    float pi = 3.141592;
    double morepi = 3.141592653589793;
    bool e = true;
    unsigned char g = 255;

    printf("This is the float:\n%f\n", pi);
    printf("This is double:\n%f\n", morepi);
    printf("This is the boolean value:\n%d\n", e);
    printf("This is the unsigned char:\n%u\n", g);

    return 0; // Good practice to include return 0 in main
}

