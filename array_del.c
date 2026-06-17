#include<stdio.h>
int main(){
    int n,c,arr[100];
    printf("Enter no.of elements of array: ");
    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        printf("Enter element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to be deleted: ");
    scanf("%d", &c);
    for(int i=0;i<n;i++)
    {
        if(arr[i]==c)
        {
            for(int j=i;j<n-1;j++)
            {
                arr[j]=arr[j+1];
            }
            n--;
            i--;
        }
    }
    printf("Array after deletion:\n ");
    for(int i=0;i<n;i++)
    {
        printf("%d \n ", arr[i]);
    }
    return 0;
}