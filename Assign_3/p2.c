// Write a C program to find maximum between three numbers using conditional operator
#include<stdio.h>
int main(){
    int a,b,c,max;
    printf(" Enter first number : ");
    scanf("%d",&a);
    printf(" Enter second number : ");
    scanf("%d",&b);
    printf(" Enter third number : ");
    scanf("%d",&c);
    max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    printf(" Maximum between %d, %d and %d is %d\n",a,b,c,max);
    return 0;
}