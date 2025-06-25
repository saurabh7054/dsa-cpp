#include<iostream> 
#include<vector>  
using namespace std;

// Function to find the missing element in an array
int findMissingEleArr(vector<int>& arr, int N) {
    // Calculate the total sum of the first N natural numbers
    int total = (N * (N + 1)) / 2;

    // Initialize sum to store the sum of elements in the array
    int sum = 0;
    
    // Loop through the array to calculate the sum of its elements
    for(int i = 0; i < N - 1; i++) {
        sum += arr[i]; // Add each element to sum
    }

    // Calculate the missing number by subtracting the sum from the total
    int miss = total - sum;
    return miss; // Return the missing number
}

int main() {
    int N = 5; // Define the total number of elements (including the missing one)
    
    // Initialize the array with one missing element (3 is missing)
    vector<int> arr = {1, 2, 4, 5};

    // Call the function to find the missing element and store the result
    int result = findMissingEleArr(arr, N);
    
    // Output the result
    cout << "Find Missing element is : " << result << endl;
    return 0; 
}
