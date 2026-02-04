#include <stdio.h>

int main() {
    int n;
    printf("Unesite broj elemenata niza: ");
    scanf("%d", &n);

    int niz[n+1], i, j, temp;
    printf("Unesite elemente niza:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &niz[i]);
    printf("Niz pre sortiranja: ");
for(i = 0; i < n; i++)
    printf("%d ", niz[i]);
printf("\n");

    // Sortiranje rastuce
    for(i = 0; i < n; i++) {
        for(j = i + 1; j < n; j++) {
            if(niz[i] > niz[j]) {
                temp = niz[i];
                niz[i] = niz[j];
                niz[j] = temp;
            }
        }
    }

    printf("Sortirani niz (feature-output),develop verzija ");
    for(i = 0; i < n; i++)
        printf("%d ", niz[i]);
    printf("\n");

    return 0;
}
