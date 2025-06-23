#include<iostream>
#include<vector>   
using namespace std;
 
// Function to find the largest element in the array
bool CheckArrisSortOrnot(vector<int>& arr, int n) {
    // Loop starts from 1 since we need to compare with the previous element
    for (int i = 1; i < n; i++) {
        // Check if the current element is less than the previous element
        if (arr[i] < arr[i - 1]) {
            return false; // If the array is not sorted, return false
        }
    }
    return true; // If the loop completes without finding an unsorted pair, return true
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
   
    bool result = CheckArrisSortOrnot(arr, n);
    // Output the result based on the boolean value returned
    if (result) {
        cout << "true"; // If sorted, print true
    } else {
        cout << "false"; // If not sorted, print false
    }
    
    return 0; 
}
