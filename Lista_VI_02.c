#include <stdio.h>

int main() {

    int A[20];
    int B[20];
    int i;

    for (i = 0; i < 20; i++) {
        A[i] = 5 + i;
    }

    for (i = 0; i < 20; i++) {
        B[i] = A[i] * 2;
    }

    for (i = 0; i < 20; i++) {
        printf("A[%d] = %d | B[%d] = %d\n", i, A[i], i, B[i]);
    }

    return 0;
}
