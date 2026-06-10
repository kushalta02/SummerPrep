// Program to convert Kilometers per hour to Miles per hour
#include<stdio.h>
int main(){
    float km_per_hour, miles_per_hour;
    printf("Enter  Kilometers per hour: ");
    scanf("%f", &km_per_hour);
    miles_per_hour = km_per_hour * 0.621371;
    printf("Miles per hour: %f\n", miles_per_hour);
    return 0;
}