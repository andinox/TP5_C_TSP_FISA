#include <stdio.h>
#include <stdlib.h>


int Scompare(const void *a, const void *b) {
    return (*(short *)a - *(short *)b);
}

int Dcompare(const void *a, const void *b) {
    if (*(double *)a < *(double *)b) return -1;
    if (*(double *)a > *(double *)b) return 1;
    return 0;
}

int main() {
    short tab_1[5] = {4, 7, 2, 9, 1};
    double tab_2[5] = {7.2, 2.1, 9.3, 1.0, 2.0};

    qsort(tab_1, 5, sizeof(short), Scompare);
    qsort(tab_2, 5, sizeof(double), Dcompare);

    for (int i = 0; i < 5; i++) {
        printf("%d ", tab_1[i]);
    }
    printf("\n");
    for (int i = 0; i < 5; i++) {
        printf("%f ", tab_2[i]);
    }

    return 0;
}