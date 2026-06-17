// program to check a number is positive,negative or zero using switch case
#include<stdio.h>
int main(){
    int num;
    printf(" Enter a number : \n");
    scanf("%d",&num);

    switch(num>0){
        case 1:
            printf(" The number is positive.\n");
            break;
        default:
            switch(num<0){
                case 1:
                    printf(" The number is negative.\n");
                    break;
                default:
                    printf(" The number is zero.\n");
            }
    }
    return 0;
    }
