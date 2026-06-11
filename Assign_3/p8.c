// Write a C program to check whether a number is positive, negative, or zero using conditional
#include<stdio.h>
int main(){
    int num;
    printf(" Enter a number : ");
    scanf("%d",&num);
    (num > 0) ? printf(" %d is a positive number",num) : (num < 0) ? printf(" %d is a negative number",num) : printf(" %d is zero",num);
    return 0;
}