// program to print all natutal numbers in reverse order from n to 1 using while loop
#include <stdio.h>
int main(){
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Natural numbers from %d to 1 are:\n", n);
    i = n;
    while(i >= 1){
        printf("%d ", i);
        i--;
    }
    return 0;
}