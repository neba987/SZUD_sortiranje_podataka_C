#include <stdio.h>

int main() {
    int niz[5] = {5, 3, 4, 1, 2};
    int i, j, temp;

    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (niz[i] > niz[j]) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }

    printf("Sortirani niz: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", niz[i]);
    }

    return 0;
}
