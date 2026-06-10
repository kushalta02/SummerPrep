// Program to calculate average and pereventages of 5 subjects
#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5,sum;
    float average;
    int percentage;
    printf(" Enter marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    sum = s1 + s2 + s3 + s4 + s5;
    average = sum / 5.0;
    percentage = (sum / 500.0) * 100;
    printf(" Average: %.2f\n", average);
    printf(" Percentage: %d%%\n", percentage);
    return 0;
}