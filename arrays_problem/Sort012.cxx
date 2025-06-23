// Input: nums = [2,0,2,1,1,0]
// Output : [0,0,1,1,2,2]

#include<iostream>
#include<vector>
using namespace std;

// Function to sort an array containing only 0s, 1s, and 2s
int sort01(vector<int> & arr, int n) {
    int low = 0;       // Pointer for the next position of 0
    int mid = 0;       // Pointer for the current element
    int high = n - 1;  // Pointer for the next position of 2

    // Loop until mid pointer crosses high pointer
    while (mid <= high) { // Changed to <= to include high in processing
        if (arr[mid] == 0) { // If the current element is 0
            swap(arr[mid], arr[low]); // Swap with low pointer
            mid++; // Move mid pointer forward
            low++; // Move low pointer forward
        } else if (arr[mid] == 1) { // If the current element is 1
            mid++; // Just move mid pointer forward
        } else { // If the current element is 2
            swap(arr[mid], arr[high]); // Swap with high pointer
            high--; // Move high pointer backward
        }
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n; // Input size of the array
    
    vector<int> arr(n); // Create a vector of size n
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort01(arr, n); // Call the function to sort the array
    cout << "Sorted array is: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " "; // Print sorted array
    }

    cout << endl;
    return 0; 
}
