#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);


    // Loop through rows
    for (int i = 1; i <= n; i++) {
        // Loop through columns
        for (int j = 1; j <= n; j++) {
            // Print '*' for the border, space for the inside
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to the next line
        printf("\n");
    }

    return 0;
}