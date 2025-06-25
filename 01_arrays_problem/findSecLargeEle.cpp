#include<iostream>
#include<vector> 
#include<climits> 
using namespace std; 


int fideSecLarge(vector<int>& arr, int n) {
    int large = arr[0]; // Initialize 'large' with the first element of the array
    int secLarge = INT_MIN; // Initialize 'secLarge' to the smallest integer value

    // Iterate through the array starting from the second element
    for (int i = 1; i < n; i++) {
        // If the current element is greater than 'large'
        if (arr[i] > large) {
            secLarge = large; // Update 'secLarge' to be the previous 'large'
            large = arr[i]; // Update 'large' to be the current element
        } else {
            // If the current element is less than 'large' and greater than 'secLarge'
            if (arr[i] < large && arr[i] > secLarge) {
                secLarge = arr[i]; // Update 'secLarge' with the current element
            }
        }
    }
    return secLarge; // Return the second largest element
}

int main() {
    int n; 
    cout << "Enter size of array: ";  
    cin >> n; 
    
    vector<int> arr(n);
    
    cout << "Enter elements of array: "; // Prompt to enter elements of the array
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    }
    int result = fideSecLarge(arr, n);
    
    cout << "Second largest element is: " << result << endl;
    
    return 0; 
}
