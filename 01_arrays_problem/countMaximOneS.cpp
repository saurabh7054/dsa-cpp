#include<iostream> // Include the input-output stream library
#include<vector>   // Include the vector library
using namespace std; // Use the standard namespace

// Function to count the maximum number of consecutive 1s in the array
int countMaximumOneS(vector<int>& arr, int n) {
    int count = 0;       // Initialize count for consecutive 1s
    int maxCount = 0;    // Initialize maxCount to keep track of the maximum

    // Iterate through each element of the array
    for(int i = 0; i < n; i++) {
        // If the current element is 1
        if(arr[i] == 1) {
            count++; // Increment the count of consecutive 1s
            maxCount = max(count, maxCount); // Update maxCount if count exceeds it
        } else {
            count = 0; // Reset count if the element is not 1
        }
    }
    return maxCount; // Return the maximum count of consecutive 1s
}

int main() {
    int n; // Variable to store the size of the array
    cout << "Enter size of array :"; // Prompt user for array size
    cin >> n; // Read the size of the array

    vector<int> arr(n); // Initialize a vector of size n
    cout << "Enter elements of array :"; // Prompt user for array elements
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; // Read each element into the vector
    }

    int result = countMaximumOneS(arr, n); // Call the function and store the result
    cout << "Maximum 1s in array : " << result << endl; // Output the result
    return 0; // End of the program
}
