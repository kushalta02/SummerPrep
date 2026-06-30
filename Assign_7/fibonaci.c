// program to print fibonaci series 
#include<stdio.h>
int fibo(int n){
    if(n<=1)
    
        return (n);
    
   return fibo(n-1)+fibo(n-2);

}
int main(){
    int num;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Fibonaci series");
    for(int i=0;i<num;i++){
        printf("%d \n",fibo(num));
}
    return 0;
    }
    