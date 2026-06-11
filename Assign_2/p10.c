// C program to calculate simple interest.
#include<stdio.h>
int main(){
    float principal, time, rate, simple_interest;
    printf(" Enter principal amount : ");
    scanf("%f",&principal);
    printf(" Enter time period : ");
    scanf("%f",&time);
    printf(" Enter rate of interest : ");
    scanf("%f",&rate);
    simple_interest = (principal * time * rate) / 100;
    printf(" Simple Interest : %.2f\n",simple_interest);
    return 0;
}