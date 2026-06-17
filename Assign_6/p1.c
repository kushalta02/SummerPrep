// program to print natural numbers from 1 to n using while loop
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Natural numbers from 1 to %d are:\n", n);
    while(i <= n){
        printf("%d ", i);
        i++;
    }
    return 0;
}