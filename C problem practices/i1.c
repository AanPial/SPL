#include <stdio.h>

int main() {
    // Declare and initialize a double variable
    double myDouble = 3.14;

    // Declare and initialize a boolean-like integer variable
    int myBoolean = 1; // 1 represents true

    // Print the double value
    printf("The double value: %e\n", myDouble);

    // Print the boolean value
    printf("The boolean value: %d\n", myBoolean);

    // Change the values
    myDouble = 1.618039;
    myBoolean = 0; // 0 represents false

    // Print the updated double value
    printf("The double value: %lf\n", myDouble);

    // Print the updated boolean value
    printf("The boolean value: %d\n", myBoolean);

    return 0;
}
