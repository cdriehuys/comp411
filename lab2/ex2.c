/*
 * Program to calculate the sum, mean, and product of five floating
 * point numbers.
 */

#include <stdio.h>

main() {
    printf("Enter five floating-point numbers:\n");

    // Initialize product and sum
    float product = 1;
    float sum = 0;

    // Read in numbers and update totals
    for (int i = 0; i < 5; i++) {
        float temp;
        scanf("%f", &temp);

        sum += temp;
        product *= temp;
    }

    // Calculate mean
    float mean = sum / 5;

    // Display output
    printf("Sum is %.4f\n", sum);
    printf("Mean is %.4f\n", mean);
    printf("Product is %.4f\n", product);

    return;
}
