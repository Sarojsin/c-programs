#include <stdio.h>

// Define a structure for complex numbers
struct Complex {
    float real;
    float imaginary;
};

// Function to add two complex numbers
struct Complex add(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

// Function to multiply two complex numbers
struct Complex multiply(struct Complex num1, struct Complex num2) {
    struct Complex result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

int main() {
    // Declare two complex numbers
    struct Complex complexNum1, complexNum2, sum, product;

    // Input from user for the first complex number
    printf("Enter real and imaginary parts of complex number 1: ");
    scanf("%f %f", &complexNum1.real, &complexNum1.imaginary);

    // Input from user for the second complex number
    printf("Enter real and imaginary parts of complex number 2: ");
    scanf("%f %f", &complexNum2.real, &complexNum2.imaginary);

    // Perform addition and multiplication
    sum = add(complexNum1, complexNum2);
    product = multiply(complexNum1, complexNum2);

    // Display the results
    printf("Sum: %.2f + %.2fi\n", sum.real, sum.imaginary);
    printf("Product: %.2f + %.2fi\n", product.real, product.imaginary);

    return 0;
}