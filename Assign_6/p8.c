// program to find the sum of all odd numbers between 1 to n
#include <stdio.h>
int main(){
    int n, sum = 0, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    while(i <= n){
        sum += i;
        i += 2;
    }
    printf("Sum of all odd numbers between 1 to %d is: %d\n", n, sum);
    return 0;
}