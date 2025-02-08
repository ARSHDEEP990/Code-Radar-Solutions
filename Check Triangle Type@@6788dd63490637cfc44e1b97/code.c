#include <stdio.h>

int main() {
    int side1, side2, side3;
    
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);
    
    if (side1 <= 0 || side2 <= 0 || side3 <= 0) {
        printf("Invalid triangle: Sides must be positive.\n");
    } else if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral");
        } else if (side1 == side2 || side2 == side3 || side1 == side3) {
            printf("Isosceles");
        } else {
            printf("Scalene");
        }

    
    return 0;
}
