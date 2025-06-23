#include<iostream> // Include the iostream library for input and output
#include<vector>   // Include the vector library to use the vector container

using namespace std; // Use the standard namespace

// Function to find the largest element in the array
int fildLargest(vector<int>& arr, int n) {
    int large = arr[0]; // Initialize 'large' with the first element of the array
    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // Check if the current element is greater than the current 'large'
        if (arr[i] > large) {
            large = arr[i]; // Update 'large' with the current element
        }
    }
    return large; // Return the largest element found
}

int main() {
    int n; // 
    cout << "Enter size of array: "; 
    cin >> n; 
    
    vector<int> arr(n); // Create a vector of integers with size 'n'
    cout << "Enter elements of array: "; 
    for (int i = 0; i < n; i++) { // Loop through 'n' times to read array elements
        cin >> arr[i]; 
    }
    
    int result = fildLargest(arr, n); // Call the function to find the largest element and store the result
    cout << "Largest element is: " << result << endl; 
    return 0; // Indicate that the program ended successfully
}
