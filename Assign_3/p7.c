// Write a C program to enter a four digit number and print all digit.
#include<stdio.h>
int main(){
    int num, digit1, digit2, digit3, digit4;
    printf(" Enter a four digit number : ");
    scanf("%d",&num);
    if(num >= 1000 && num <= 9999){
        digit1 = num / 1000;
        digit2 = (num / 100) % 10;
        digit3 = (num / 10) % 10;
        digit4 = num % 10;
        printf(" The digits of the number %d are: %d, %d, %d, %d\n", num, digit1, digit2, digit3, digit4);
    } else {
        printf(" Please enter a valid four digit number.\n");
    }
    return 0;
}