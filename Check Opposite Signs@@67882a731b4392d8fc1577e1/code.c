#include <stdio.h>

// Function to check if two numbers have opposite signs
int haveOppositeSigns(int a, int b) {
    return (a < 0 && b > 0) || (a > 0 && b < 0);
}

int main() {
    int num1, num2;
    
    // Taking input from the user

    scanf("%d %d", &num1, &num2);
    
    // Checking if numbers have opposite signs
    if (haveOppositeSigns(num1, num2)) {
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
