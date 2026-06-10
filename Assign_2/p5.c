// Program that accepts two items's weight and number of purchase (float) and calculates total cost of purchase
#include<stdio.h>
int main(){
    float weight1, weight2, price1, price2, total_cost;
    float quantity1, quantity2;
    printf("Enter weight and price of item 1: ");
    scanf("%f %f", &weight1, &price1);
    printf("Enter quantity of item 1: ");
    scanf("%f", &quantity1);
    printf("Enter weight and price of item 2: ");
    scanf("%f %f", &weight2, &price2);
    printf("Enter quantity of item 2: ");
    scanf("%f", &quantity2);
    total_cost = (weight1 * price1 * quantity1) + (weight2 * price2 * quantity2);
    printf("Total cost of purchase: %.2f\n", total_cost);
    return 0;
}