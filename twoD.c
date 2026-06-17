#include<stdio.h>
int main(){
    int r,c,arr[100][100];
    printf("Enter no.of rows :\n");
    scanf("%d",&r);
    printf("Enter no.of columns :\n");
    scanf("%d",&c);
    printf("Enter elements of array :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter elements of row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr[i][j]);

        }
    }
    // print array 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" Array Row %d Column %d: %d\n",i+1,j+1,arr[i][j]);
        }
    }

}