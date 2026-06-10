// program to read and display all types of variables
#include<stdio.h>
int main(){
    // initialization of variables
    int a;
    float b;
    char c;
    // reading values from user
    printf("Enter integer value: ");
    scanf("%d", &a);
    printf("Enter float value: ");
    scanf("%f", &b);
    printf("Enter character value: ");
    scanf(" %c", &c);
    // displaying values
    printf("Integer value: %d\n", a);
    printf("Float value: %f\n", b);
    printf("Character value: %c\n", c);
    return 0;
}