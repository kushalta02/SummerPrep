// no return tupe no parametr
#include<stdio.h>

void add()
{
    int a,b,sum;
    printf("enter two numbers : \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    printf(" Sum= %d \n",sum);


}
// return no paramter
int add1(){
    int a,b,sum;
    printf("enter two numbers : \n");
    scanf("%d %d",&a,&b);
    sum=a+b;
    // printf(" Sum= %d \n",sum);
    return sum;

}
// no return with paramter
void add3(int a,int b){
    int sum;
    sum=a+b;
    printf("sum = %d \n",sum);
}
// with both 
int add4(int a,int b){
    int sum;
    sum=a+b;
    // printf("sum = %d \n",sum);
    return sum;
}

int main()
{
    add();
    int a,b;
    printf("enter two numbers : \n");
    scanf("%d %d ",&a,&b);
    printf("addition of two numbers is : %d \n", add1());
    add3(a,b);
    int c,d;
    printf("enter two numbers : \n");
    scanf("%d %d ",&c,&d);

    printf("addition of two numbers is : %d \n", add4(c,d));
    add3(c,d);

    // printf("addition of two numbers is : %d \n", add4(a,b));
    return 0;
}