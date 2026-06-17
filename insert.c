#include<stdio.h>

int main()
{
    int n, arr[100], pos, ele;

    printf("Enter no.of elements of array: ");
    scanf("%d", &n);

    if(n >= 100)
    {
        printf("Array is full!\n");
        return 0;
    }

    printf("Elements of array:\n");
    for(int j=0; j<n; j++)
    {
        scanf("%d", &arr[j]);
    }

    printf("Array before insertion:\n");
    for(int j=0; j<n; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\nEnter the position where you want to insert an element: ");
    scanf("%d", &pos);

    printf("Enter the element to be inserted: ");
    scanf("%d", &ele);

    if(pos < 1 || pos > n+1)
    {
        printf("Invalid position!\n");
        return 0;
    }

    for(int i=n; i>=pos; i--)
    {
        arr[i] = arr[i-1];
    }

    arr[pos-1] = ele;

    printf("Array after insertion:\n");
    for(int i=0; i<n+1; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}