// Program to find  area of equilateral triangle
#include <stdio.h>
int main() {
    float side, area;
    printf("Enter the side length of the equilateral triangle: ");
    scanf("%f", &side);
    area = (sqrt(3) / 4) * (side * side);
    printf("Area of the equilateral triangle: %.2f\n", area);
    return 0;
}