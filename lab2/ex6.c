/*
 * Determine if a user inputted integer is a Fibonacci number.
 */

#include <math.h>
#include <stdio.h>

/*
 * Determine if the given number is a perfect square.
 */
int is_perfect_square(int num) {
    int closest_root = (int) sqrt(num);

    return num == closest_root * closest_root ? 1 : 0;
}

/*
 * Determine if the given number is a Fibonacci number.
 *
 * To do this we use the fact that for each Fibonacci number, either
 * 5x^2 + 4 or 5x^2 - 4 will be a perfect square.
 */
int is_fib(int num) {
    int temp = 5 * (num * num);

    return is_perfect_square(temp + 4) || is_perfect_square(temp - 4) ? 1 : 0;
}

main() {
    int num;

    do {
        printf("Number [1-1000]: ?\n");
        scanf("%d", &num);

        if (num == 0) {
            printf("Done\n");
        } else if (is_fib(num)) {
            printf("Fibonacci number\n");
        } else {
            printf("Not a Fibonacci number\n");
        }
    } while (num != 0);
}
