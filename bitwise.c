#include<stdio.h>
int main(){
    int a ,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    printf("\nBitwise AND  %d %d ",a&b);
    printf("\nBitwise OR  %d %d ",a|b);
    printf("\nBitwise XOR %d %d ",a^b);
    printf("\nBitwise NOT %d %d",~a,~b);
    printf("\nBitwise Left shift %d %d ",a<<1,b<<1);
    printf("\nBitwise Right shift %d %d \n",a>>1,b>>1);
    return 0;
}