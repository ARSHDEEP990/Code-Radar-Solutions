#include <stdio.h>

int main() {
    int num;

    // Input from user

    scanf("%d", &num);

    // Checking divisibility
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by Both");
    } else if (num % 3 == 0) {
        printf("Divisible by 3");
    } else if (num % 5 == 0) {
        printf("Divisible by 5");
    } else {
        printf("Not Divisible");
    }

    return 0;
}