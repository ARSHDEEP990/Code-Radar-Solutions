#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers

    scanf("%d", &num1);

    scanf("%d", &num2);

    // Check if num1 is a multiple of num2
    if (num2 != 0 && num1 % num2 == 0) {
        printf("Yes");
    } else {
        printf("No");
    }

    return 0;
}