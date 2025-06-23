	#include<iostream>
#include<vector>  

using namespace std; // Use the standard namespace

// Function to reverse the elements of the array between indices 's' and 'e'
void reverse(vector<int>& arr, int s, int e) {
    while (s < e) { // Continue to swap until the two indices meet
        int temp = arr[s]; // Store the element at the start index
        arr[s] = arr[e]; // Swap the start element with the end element
        arr[e] = temp; // Assign the stored start element to the end index
        s++; // Move the start index to the right
        e--; // Move the end index to the left
    }
}

// Function to left rotate the array by 'k' positions
void leftrotate(vector<int>& arr, int n, int k) {
    k = k % n; // Ensure 'k' is within the bounds of the array size
    reverse(arr, 0, n - k - 1); // Reverse the first part of the array
    reverse(arr, n - k, n - 1); // Reverse the second part of the array
    reverse(arr, 0, n - 1); // Reverse the entire array to complete the rotation
}

int main() {
    int n, k; // Declare variables for the size of the array and number of positions to rotate
    cout << "Enter size of array: "; // Prompt the user to enter the size of the array
    cin >> n; // Read the size of the array from input
    
    vector<int> arr(n); // Create a vector of integers with size 'n'
    
    cout << "Enter elements of array: "; // Prompt to enter elements of the array
    for (int i = 0; i < n; i++) { // Loop through 'n' times to read array elements
        cin >> arr[i]; // Read each element into the vector
    }
    
    cout << "Enter position of k: "; // Prompt the user to enter the number of positions to rotate
    cin >> k; // Read the rotation count
    
    leftrotate(arr, n, k); // Call the function to left rotate the array
    
    cout << "Left rotated array is: "; // Output statement for the rotated array
    for (int i = 0; i < n; i++) { // Loop through the array to print each element
        cout << arr[i] << " "; // Print each element followed by a space
    }
    
    cout << endl; // Print a newline character for better output formatting
    return 0; // Indicate that the program ended successfully
}

