// print n numbers in reverse using recursion
#include<stdio.h>
void revn(int n){
    if(n>0){
        printf("%d \n",n);
        revn(n-1);
    }
}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    revn(num);
    return 0;
}