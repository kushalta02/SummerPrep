// WAP to demonstarte the use lof logical operators by checking whether a given number lies within a specified range or not.
#include<stdio.h>
int main(){
    int num, lower, upper;
    printf("Enter the number: ");
    scanf("%d", &num);
    printf("Enter the lower bound: ");
    scanf("%d", &lower);
    printf("Enter the upper bound: ");
    scanf("%d", &upper);
    if(num >= lower && num <= upper){
        printf("The number lies within the specified range.\n");
    }
    else{
        printf("The number does not lie within the specified range.\n");
    }
    return 0;
}