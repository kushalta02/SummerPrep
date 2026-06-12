// program to check whether a charcter is uppercase or lowercase
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 'A' && ch <= 'Z') {
        printf("The character is uppercase.\n");
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The character is lowercase.\n");
    } else {
        printf("The character is not a letter.\n");
    }
    return 0;
}