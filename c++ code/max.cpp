// find maximum and minimum of an array using stl and taking input from user
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    auto max_it = max_element(arr.begin(), arr.end());
    auto min_it = min_element(arr.begin(), arr.end());
    cout << "Maximum element is: " << *max_it << endl;
    cout << "Minimum element is: " << *min_it << endl;
    return 0;
}