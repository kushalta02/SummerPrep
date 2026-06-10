#include<stdio.h>
int main() {
    printf("Hello, World!\n");
    int a = 5;int b = 10;
    int sum = a + b;
    int multiplication = a * b;
    int division = b / a;
    float division_float = (float)b / (float)a;
    printf("The sum of %d and %d is %d\n", a, b, sum);
    printf("The multiplication of %d and %d is %d\n", a, b, multiplication);
    printf("The division of %d and %d is %d\n", a, b, division);
    printf("The float division of %d and %d is %.2f\n", a, b, division_float);

    
    return 0;
}