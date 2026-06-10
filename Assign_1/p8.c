// program to convert specified days into years, weeks and days snd ignore leap year
#include<stdio.h>
int main(){
    int days,years,weeks,remaining_days;
    printf("Enter number of days: ");
    scanf("%d",&days);
    years=days/365;
    remaining_days=days%365;
    weeks=remaining_days/7;
    remaining_days=remaining_days%7;
    printf("Years : %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d\n", remaining_days);

}