#include <stdio.h>

int main() {
    char operator;
    double num1, num2, result;

    scanf(" %c", &operator);

    int result ;
    scanf("%lf %lf", &num1, &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("%d",result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("%d",result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("%d",result);
    } else if (operator == '/') {
        if (num2 != 0) {
            result = num1 / num2;
            printf("%d",result);
        
    
        }
    }
    return 0;
}