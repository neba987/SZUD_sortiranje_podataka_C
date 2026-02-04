#include <stdio.h>

int main() {
    int a = 5, b = 3;

    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    printf("Sortirani brojevi: %d %d\n", a, b);
    return 0;
}
