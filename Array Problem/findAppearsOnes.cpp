#include<iostream> 
#include<vector>  
using namespace std; 

// Function to find the number that appears only once in the array
int findAppearNum(vector<int>& arr, int n) {
    int ans = 0; // Initialize a variable to hold the result (XOR result)

    // Iterate through each element in the array
    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i]; // Perform XOR operation with each element
    }
    
    return ans; // Return the final result
}

int main() {
    int n;
    cout << "Enter size of array: "; 
    cin >> n; 
    
    vector<int> arr(n); 
    cout << "Enter elements of array: "; 
    for(int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    
    int result = findAppearNum(arr, n);
    cout << "The number that appears once is: " << result << endl;
    return 0; 
}
