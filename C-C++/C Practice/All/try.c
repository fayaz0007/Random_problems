#include <stdio.h>

int main() {
    int number = 10;
    int i;

    for (i = 0; i < 10; i++) {
        number--;
        printf("%d\n", number);
    }

    return 0;
}