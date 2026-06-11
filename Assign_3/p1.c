// Write a C program to find maximum between two numbers using conditional operator
#include<stdio.h>
int main(){
    int a, b, max;
    printf(" Enter first number : ");
    scanf("%d",&a);
    printf(" Enter second number : ");
    scanf("%d",&b);
    max = (a > b) ? a : b;
    printf(" Maximum between %d and %d is %d\n",a,b,max);
    return 0;
}