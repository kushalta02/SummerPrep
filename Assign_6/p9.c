// program to  print multiplication table of a number n
#include <stdio.h>
int main(){
    int n, i = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    printf("Multiplication table of %d is:\n", n);
    while(i <= 10){
        printf("%d x %d = %d\n", n, i, n*i);
        i++;
    }
    return 0;
}