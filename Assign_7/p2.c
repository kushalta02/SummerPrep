// program to check a number is palindrome or not
#include <stdio.h>
int main(){
    int n, reverse = 0, remainder, original;
    printf("Enter a number: ");
    scanf("%d", &n);
    original = n;
    while(n != 0){
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n /= 10;
    }
    if(original == reverse){
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }
    return 0;
}