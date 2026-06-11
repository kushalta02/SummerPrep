// Write a C program to check whether a number is even or odd using conditional operator.
#include<stdio.h>
int main(){
    int num;
    printf(" Enter a number : ");
    scanf("%d",&num);
    (num % 2 == 0) ? printf(" %d is an even number"): printf(" %d is an odd number");
    return 0;
}