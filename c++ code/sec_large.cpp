// find second largest element in an array

#include <iostream>
using namespace std;
int secondLargest(int arr[], int n) {
    int first = arr[0];
    int second = -1;
    for(int i = 1; i < n; i++)
    {
        if(arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first)
        {
            second = arr[i];
        }
    }
    return second;
}
int main(){
    int m;
    cout << "Enter the number of elements: ";
    cin >> m;
    int arr[m];
    cout << "Enter the elements: ";
    for(int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    cout << "Second largest element is: " << secondLargest(arr, m) << endl;
}