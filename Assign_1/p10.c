// Program to convert a given integer (in seconds) to hours, minutes and seconds
#include<stdio.h>
int main(){
    int total_seconds, hours, minutes, seconds;
    printf("Enter total seconds: ");
    scanf("%d", &total_seconds);
    hours = total_seconds / 3600;
    total_seconds = total_seconds % 3600;
    minutes = total_seconds / 60;
    seconds = total_seconds % 60;
    printf("%d seconds is equal to %d hours, %d minutes and %d seconds\n", total_seconds, hours, minutes, seconds);
    return 0;
}