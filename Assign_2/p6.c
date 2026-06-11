/*program to calculate a bike’s average consumption from the given total distance
(integer value) traveled (in km) and spent fuel (in liters, float number – 2 decimal point).*/
#include<stdio.h>
int main(){
    int dist;
    float fuel;
    printf(" Distance Travelled : ");
    scanf("%d",&dist);
    printf(" Fuel Spent : ");
    scanf("%f",&fuel);
    float avg = dist/fuel;
    printf(" Average Consumption : %.2f km/l\n",avg);
}