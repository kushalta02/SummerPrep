// Write a C program to Swap two Numbers Without Using temporary variable.
#include<stdio.h>
int main(){
    int a,b;
    printf(" Enter first number : ");
    scanf("%d",&a);
    printf(" Enter second number : ");
    scanf("%d",&b);
    a = a + b; // Step 1: a now holds the sum of a
    b = a - b; // Step 2: b now holds the original value of a
    a = a - b; // Step 3: a now holds the original value of b
    printf(" After swapping : a = %d, b = %d\n",a,b);
    return 0;
}