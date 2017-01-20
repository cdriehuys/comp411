#include <stdio.h>

main() {
    printf("Please enter a number from 1 to 5:\n");

    int num;
    scanf("%d", &num);

    if (num < 1 || num > 5) {
        printf("Number is not in the range from 1 to 5\n");

        return;
    }

    for (int i = 1; i <= num; i++) {
        printf("%d Hello World\n", i);
    }

    return;
}
