// program to print all alphabets from a-z using while loop
#include <stdio.h>
int main(){
    char c = 'a';
    printf("Alphabets from a to z are:\n");
    while(c <= 'z'){
        printf("%c ", c);
        c++;
    }
    return 0;
}