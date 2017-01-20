/*
 * Program the displays a formatted table of 6 inputted integers.
 */

#include <stdio.h>

main() {
    printf("Enter six integers:\n");

    int nums[6];
    for (int i = 0; i < 6; i++) {
        scanf("%i", &nums[i]);
    }

    printf("1234567890bb1234567890\n");

    for (int i = 0; i < 6; i += 2) {
        printf("%10i  %10i\n", nums[i], nums[i + 1]);
    }

    return;
}
