#include <stdio.h>
#include <string.h>
#include <math.h>

#include <stdlib.h>

int main() 
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT  */
    char ch;
    printf(" ");
    scanf("%c",&ch);
    
    char s[100];
    printf(" ");
    scanf("%s",s);

    

    // sentence input
    char s1[100];
    printf(" ");

    fgets(s1, sizeof(s1), stdin);
    // printf("Sentence: %s\n", s1);
    

    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",s1);
    
   
    
    return 0;
}