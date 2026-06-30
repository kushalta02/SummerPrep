// program to ente a number and print it in words
#include<stdio.h>
int main(){
    int n,words;
    char *ones[]={"","one","two","three","four","five","six","seven","eight","nine","ten"};
    char *tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
    printf("Enter a number : \n");
    scanf("%d",&n);
    if (n>=100){
        printf("%s hundred ",ones[n/100]);
        n%=100;
    }
    if(n>=20){
        printf("%s ",tens[n/10]);
        n%=10;

    }
    if(n>0){
        printf("%s \n",ones[n]);
    }
    return 0;
}