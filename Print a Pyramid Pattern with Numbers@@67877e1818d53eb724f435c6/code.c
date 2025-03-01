#include <stdio.h>

int main() {
    int n, i, j, space;
    
    // Number of rows in the pyramid

    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // Print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("%d",j);
        }
        printf("\n");
    }

    return 0;
}