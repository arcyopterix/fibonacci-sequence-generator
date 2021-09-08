#include <stdio.h>

/* Generates the fibonacci sequence up to user-specified number of digits */
int main() {

    int n;    // Specifies number of digits n of the sequence

    printf("Please enter the number of digits for your Fibonacci sequence:\n");
    scanf("%d", &n);
    int fsequence[n];
    fsequence[0] = 1;
    fsequence[1] = 1;
    for (int i = 2; i < n; i++) {
        fsequence[i] = fsequence[i - 2] + fsequence[i - 1];
    }
    printf("Your fibonacci sequence of %d digits is:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fsequence[i]);
    }

    return 0;
}
