// program to find all roots of a quadratic equation
#include <stdio.h>
#include <math.h>
int main(){
    int equal, a, b, c, discriminant;
    printf("Enter the coefficients a, b and c of the quadratic equation (ax^2 + bx + c = 0): ");
    scanf("%d%d%d",&a,&b,&c);
    discriminant = b*b - 4*a*c;
    if (discriminant > 0){
        printf("The roots are real and different.\n");
        printf("Root 1 = %.2f\n", (-b + sqrt(discriminant)) / (2*a));
        printf("Root 2 = %.2f\n", (-b - sqrt(discriminant)) / (2*a));
    }
    else if (discriminant == 0){
        printf("The roots are real and equal.\n");
        printf("Root = %.2f\n", -b / (2*a));
    }
    else{
        printf("The roots are complex and different.\n");
        printf("Root 1 = %.2f + %.2fi\n", -b / (2*a), sqrt(-discriminant) / (2*a));
        printf("Root 2 = %.2f - %.2fi\n", -b / (2*a), sqrt(-discriminant) / (2*a));
    }
    return 0;
}