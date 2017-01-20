#include <stdio.h>

/*
 * Determine if a number is prime. If it is prime, 0 is returned.
 * Otherwise, the number's smallest divisor is returned.
 */
int is_prime(int num) {
    // TODO: Figure out why this breaks for large numbers
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return i;
        }
    }

    return 0;
}

main() {
    int num;

    do {
        printf("Number [1-100]: ?\n");
        scanf("%d", &num);

        // If the number is 0, we can exit
        if (num == 0) {
            printf("Done\n");
        } else if (num == 1) {
            printf("Non-prime (special case)\n");
        } else {
            int result = is_prime(num);

            if (result == 0) {
                printf("Prime\n");
            } else {
                printf("Non-prime, divisible by %d\n", result);
            }
        }
    } while (num != 0);
}
