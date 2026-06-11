// Write a C program to swap two numbers using bitwise operator.
#include<stdio.h>
int main(){
    int a, b;
    printf(" Enter first number : ");
    scanf("%d",&a);
    printf(" Enter second number : ");
    scanf("%d",&b);
    printf(" Before swapping : a = %d, b = %d\n",a,b);
    a=a^b;
    b=b^a;
    a=a^b;
    printf(" After swapping : a = %d, b = %d\n",a,b);
    return 0;
}