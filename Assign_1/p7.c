// Program to find third angle of a triangle when two angles are given
#include<stdio.h>
int main(){
    int angle1, angle2, angle3;
    printf("Enter first angle of triangle: ");
    scanf("%d", &angle1);
    printf("Enter second angle of triangle: ");
    scanf("%d", &angle2);
    angle3 = 180 - (angle1 + angle2);
    printf("The third angle of the triangle is: %d\n", angle3);
    return 0;
}