#include <stdio.h>

int main() {
    int num1, num2;
    
    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    // Check if neither number is greater than zero
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
