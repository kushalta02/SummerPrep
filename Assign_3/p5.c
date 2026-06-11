// Write a C program to check whether character is an alphabet or not using conditional operator.
#include<stdio.h>
int main(){
    char ch;
    printf(" Enter a character : ");
    scanf("%c",&ch);
    ( (ch >= 'a' && ch <= 'z') || (ch >='A' && ch <= 'Z') ) ? printf(" %c is an alphabet",ch) : printf(" %c is not an alphabet",ch);
    return 0;
}
