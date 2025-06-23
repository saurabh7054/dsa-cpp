// Input format:
//  Arr[] = {1,3,2}
// Output
// : Arr[] = {2,1,3}
// Explanation: 


#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

// Change return type to void, as the function does not return anything
void next_permutation(vector<int>& arr, int n) {
    int i = n - 2;

    // Find the first index i such that arr[i] < arr[i + 1]
    while (i >= 0 && arr[i] >= arr[i + 1]) {
        i--;
    }

    if (i >= 0) {
        // Find the first index j such that arr[j] > arr[i]
        int j = n - 1;
        while (arr[j] <= arr[i]) {
            j--;
        }
        // Swap arr[i] and arr[j]
        swap(arr[i], arr[j]);
    }

    // Reverse the subarray arr[i+1...n-1]
    reverse(arr.begin() + i + 1, arr.end());  // Fixed reverse syntax for vector
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    next_permutation(arr, n);
    cout << "Next lexicographically greater permutation: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
