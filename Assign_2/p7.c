// Write a C program to calculate the distance between the two points.
#include<stdio.h>
#include<math.h>
int main(){
    int x1,x2,y1,y2;
    float dist;
    printf(" Enter X1 : ");
    scanf("%d",&x1);
    printf(" Enter Y1 : ");
    scanf("%d",&y1);
    printf(" Enter X2 : ");
    scanf("%d",&x2);
    printf(" Enter Y2 : ");
    scanf("%d",&y2);
    dist = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    printf(" Distance between the two points : %.2f\n",dist);
    return 0;
}
