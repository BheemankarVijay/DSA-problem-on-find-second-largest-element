#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int getSecondLargest(vector<int> &arr) {
    sort(arr.begin(), arr.end()); // Sort the array in ascending order
    int n = arr.size();
    for (int i = n - 1; i > 0; i--) {
        // Condition: if the largest element is not equal to the second largest element, then return the second largest element
        if (arr[i] != arr[i - 1]) {
            return arr[i - 1];
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; // Take the array elements from the user
    }

    cout << "Second Largest: " << getSecondLargest(arr) << endl;
    return 0;
}
// Worst Case Time Complexity: O(nlogn)
// Best Case Time Complexity: O(nlogn)