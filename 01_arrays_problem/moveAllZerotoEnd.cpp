#include<iostream> 
#include<vector>   

using namespace std; 

// Function to move all zeros in the array to the end while maintaining the order of non-zero elements
void moveZeroToend(vector<int>& arr, int n) {
    int j = 0; // Initialize a pointer 'j' to track the position for non-zero elements

    // Loop through each element in the array
    for (int i = 0; i < n; i++) {
        // Check if the current element is not zero
        if (arr[i] != 0) {
            arr[j] = arr[i]; // Assign the non-zero element to the 'j'th position
            j++; // Increment 'j' to the next position
        }
    }
    // After all non-zero elements have been moved, fill the rest of the array with zeros
    while (j < n) {
        arr[j] = 0; // Set the 'j'th position to zero
        j++; // Move to the next position
    }
}

int main() {
    int n; 
    cout << "Enter size of array: "; 
    cin >> n; 
    
    vector<int> arr(n); // Create a vector of integers with size 'n'
    cout << "Enter elements of array: "; 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    }
    
    moveZeroToend(arr, n); // Call the function to move all zeros to the end of the array
    
    cout << "Move Zero to end: "; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    }
    
    cout << endl; 
    return 0;
}
