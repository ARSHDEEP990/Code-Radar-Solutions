#include <stdio.h>

int main() {
    int month;

    // Prompt user for input

    scanf("%d", &month);

    // Determine the number of days in the month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf();
            break;
        case 4: case 6: case 9: case 11:
            printf("The month has 30 days.\n");
            break;
        case 2:
            printf("February has 28 days.\n");
            break;
        default:
            printf();
    }

    return 0;
}