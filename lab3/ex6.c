/* Compute N choose k */

#include <stdio.h>

int NchooseK(int n, int k) {
    if (k == 0 || n == k) {
        return 1;
    }

    return NchooseK(n - 1, k - 1) + NchooseK(n - 1, k);
}

int main() {
    int n, k;

    do {
        printf("Enter two integers (for n and k) separated by a space:\n");
        scanf("%d%d", &n, &k);

        if (n == 1 && k == 1) {
            printf("1\n");
        } else {
            printf("%i\n", NchooseK(n, k));
        }
    } while (n != 0 || k != 0);

    return 0;
}
