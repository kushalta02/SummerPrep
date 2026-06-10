// program to find volume of a sphere
#include<stdio.h>
int main(){
    // intialization of variables
    int r;
    float pi=3.14;
    // user input for radius
    printf("Enter radius: ");
    scanf("%d",&r);
    // calculation of volume
    float volume=(4.0/3.0)*pi*r*r*r;
    // displaying the result
    printf("Volume of sphere is %f \n" ,volume);
    return 0;
}