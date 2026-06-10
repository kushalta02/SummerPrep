// Program that takes minutes as input and converts it to hours and minutes
#include<stdio.h>
int main(){
    int total_minutes, hours, minutes;
    printf("Enter total minutes: ");
    scanf("%d", &total_minutes);
    hours = total_minutes / 60;
    minutes = total_minutes % 60;
    printf("%d minutes is equal to %d hours and %d minutes\n", total_minutes, hours, minutes);
    return 0;
}