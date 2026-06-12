// program to input electricity unit charges and calculate total electricity bill according to the given condition
#include <stdio.h>
int main(){
    int units;
    float bill;
    float final_b;
    printf(" Enter total no.of units : ");
    scanf("%d",&units);
    if(units>0 && units<=50){
        bill=units*0.50;
        final_b=bill*0.20;
        printf(" %d units bill is %f\n",units,final_b+bill);
    }
    else if(units>50 && units<=150){
        bill=25+(units-50)*0.75;
        final_b=bill*0.20;
        printf(" %d units bill is %f\n",units,final_b+bill);
    }
    else if(units>150 && units<=250){
        bill=100+(units-150)*1.20;
        final_b=bill*0.20;
        printf(" %d units bill is %f\n",units,final_b+bill);
    }
    else if(units>250){
        bill=220+(units-250)*1.50;
        final_b=bill*0.20;
        printf(" %d units bill is %f\n",units,final_b+bill);
    }
    else{
        printf("Invalid input.\n");
    }
    return 0;
}