// Program to print reverse of a character 
#include <stdio.h>
#include <string.h>
int main() {
    char str[100], rev[100];
    int i, j = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    // Remove newline character if present
    str[strcspn(str, "\n")] = '\0';
    // Reverse the string
    for (i = strlen(str) - 1; i >= 0; i--)
        rev[j++] = str[i];
        rev[j] = '\0';
        printf("Reversed string: %s\n", rev);
    return 0;
}