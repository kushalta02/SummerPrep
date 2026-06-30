#include<stdio.h>
int main(){
    int r,c,r2,c2,arr1[100][100],arr2[100][100];
    printf("Enter no.of rows of first array:\n");
    scanf("%d",&r);
    printf("Enter no.of columns of first array:\n");
    scanf("%d",&c);
    printf("Enter elements of first array :\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("Enter elements of row %d and column %d : ",i+1,j+1);
            scanf("%d",&arr1[i][j]);

        }
    }
    // print array 
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf(" Array 1 Row  %d Column %d: %d\n",i+1,j+1,arr1[i][j]);
        }
    }
    printf("Enter no.of rows of second array:\n");
    scanf("%d",&r2);
    printf("Enter no.of columns of second array:\n");
    scanf("%d",&c2);
    if(r!=r2 || c!=c2){
        printf("Arrays are not equal\n");
    }
    else{

        printf("Enter elements of second array :\n");
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf("Enter elements of row %d and column %d : ",i+1,j+1);
                scanf("%d",&arr2[i][j]);
            }
        }
        // print array 
        for(int i=0;i<r2;i++){
            for(int j=0;j<c2;j++){
                printf(" Array 2 Row  %d Column %d: %d\n",i+1,j+1,arr2[i][j]);
            }
        }
        // addition
        printf("Addition of two arrays is :\n");
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                printf(" Sum of Array 1 Row  %d Column %d and Array 2 Row  %d Column %d: %d\n",i+1,j+1,i+1,j+1,arr1[i][j]+arr2[i][j]);
            }
        }

    }
    return 0;
}