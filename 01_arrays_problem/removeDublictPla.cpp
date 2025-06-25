#include <iostream>
#include <vector>
using namespace std;

// Function to remove duplicates from a sorted array
int removeDuplicateSpa(vector<int>& arr, int n) {
    if (n == 0) return 0; // If the array is empty, return 0

    int l = 1; // Pointer to store the position of unique elements

    // Loop through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // If the current element is different from the last unique element
        if (arr[i] != arr[i - 1]) {
            arr[l] = arr[i]; // Store the unique element
            l++; // Increment the unique count
        }
    }
    return l; // Return the count of unique elements
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n; 

    // Handle edge case for invalid size
    if (n <= 0) {
        cout << "Invalid size. Array must have at least one element." << endl;
        return 0;
    }

    vector<int> arr(n); // Initialize the array with the given size
    cout << "Enter elements of array (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    // Remove duplicates and get the count
    int uniqueCount = removeDuplicateSpa(arr, n);

    cout << "Array after removing duplicates: ";
    // Print only the unique elements
    for (int i = 0; i < uniqueCount; i++) {
        cout << arr[i] << " "; // Output the unique elements
    }
    cout << endl; 

    return 0;
}
