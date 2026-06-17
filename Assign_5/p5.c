// program to check a number is even or odd using switch case
#include <stdio.h>
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    switch(n%2){
        case 0:
            printf("The number is even.\n");
            break;
        default:
            printf("The number is odd.\n");
    }
    return 0;
}