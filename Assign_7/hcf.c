// calculate hcf 
#include<stdio.h>
int hcf(int a,int b){
   while(b%a!=0){
      int remainder=b%a;
      b=a;
      a=remainder;

   }
   return a;
}
int main(){
    int a,b;
    printf("Enter two numbers : ");
    scanf("%d %d",&a,&b);
    printf("HCF of %d and %d is : %d",a,b,hcf(a,b));
    return 0;
}
