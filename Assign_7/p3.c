// program to find frequency of each digit in a given digit
#include <stdio.h>
int main() {
    int n, count[10] = {0}, remainder;
    printf("Enter a number: ");
    scanf("%d", &n);
    while (n != 0) {
        remainder = n % 10;
        count[remainder]++;
        n = n / 10;
    }
    printf("Frequency of each digit:\n");
    for (int i = 0; i < 10; i++) {
        printf("Digit %d: %d\n", i, count[i]);
    }
    return 0;
}