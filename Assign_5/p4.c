// program to find maximum between two numbers using switch case
#include<stdio.h>
int main(){
    int num1,num2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    switch (num1 > num2) {
        case 1:
            printf("Maximum is: %d\n", num1);
            break;
        default:
            printf("Maximum is: %d\n", num2);
    }

    return 0;
}