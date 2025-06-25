// input = {1,-1, 1}; n = 3, k = 1;
//output = 3;

#include<iostream>
#include<unordered_map> 
#include<vector> 
using namespace std; 

// Function to find the number of subarrays with a sum equal to k
int findSubarrNP(const vector<int>& arr, int n, int k) {
    unordered_map<int, int> prefix_sum; // Create a hash map to store prefix sums
    int sum = 0; // Initialize the count of valid subarrays
    int max_len = 0; // Initialize the current prefix sum
    
    prefix_sum[0] = 1; // Base case: one way to achieve a sum of 0 (by using no elements)
    
    // Loop through each element in the array
    for (int i = 0; i < n; i++) {
        max_len += arr[i]; // Update the current prefix sum
        
        // Check if there exists a prefix sum that equals max_len - k
        if (prefix_sum.find(max_len - k) != prefix_sum.end()) {
            // If found, increment sum by the count of such prefix sums
            sum += prefix_sum[max_len - k];
        }
        
        // Increment the count of the current prefix sum in the hash map
        prefix_sum[max_len]++;
    }
    
    return sum; // Return the total count of valid subarrays
}

int main() {
    int n, k;
    cout << "Enter size of array: "; 
    cin >> n; 
    
    vector<int> arr(n); 
    cout << "Enter elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter position of k: "; 
    cin >> k; 
    
    int result = findSubarrNP(arr, n, k); 
    cout << "Find the subarray with k position: " << result << endl; 
    
    return 0; 
}
