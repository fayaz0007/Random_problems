#include <stdio.h>

int main() {
    int a, b, i;
    long long multipi;

    scanf("%d", &a);

    for (i = 1; i <= a; i++) {
        scanf("%d", &b);

        multipi = 1;

        for (int j = 1; j <= b; j++) {
             multipi = multipi * j;
        }

        printf("%lli\n", multipi);
    }

    return 0;
}