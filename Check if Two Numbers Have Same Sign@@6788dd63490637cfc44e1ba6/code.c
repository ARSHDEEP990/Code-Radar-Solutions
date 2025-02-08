#include <stdio.h>

int main() {
    int num1, num2;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Check if they have the same sign using bitwise XOR
    if ((num1 ^ num2) >= 0) {
        printf("Same Sign");
    } else {
        printf("Different Sign");
    }

    return 0;
}