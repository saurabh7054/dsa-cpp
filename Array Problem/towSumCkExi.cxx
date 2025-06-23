// Input Format: N = 5, arr[] = {2,6,5,8,11}, target = 14
// Result: YES (for 1st variant)
//        [1, 3] (for 2nd variant)


#include <iostream>              
#include <unordered_map>        // Include unordered_map for hash table
#include <vector>               
using namespace std;            // Use standard namespace

// Function to find indices of two numbers that add up to the target
pair<string, vector<int>> find_indices(const vector<int>& arr, int target) {
    unordered_map<int, int> hash_map; // Create a hash map to store array values and their indices

    // Iterate through the array
    for (int i = 0; i < arr.size(); ++i) {
        int complement = target - arr[i]; // Calculate the complement needed to reach the target

        // Check if the complement exists in the hash map
        if (hash_map.find(complement) != hash_map.end()) {
            // If found, return "YES" and the indices of the two numbers
            return {"YES", {hash_map[complement], i}};
            
        }

        // Store the current number and its index in the hash map
        hash_map[arr[i]] = i;
    }

    // If no pairs found, return "NO" and an empty vector
    return {"NO", {}};
}

int main() {
    int N = 5; // Size of the array
    vector<int> arr = {2, 6, 5, 8, 11}; // Initialize the array
    int target = 14; // Define the target sum

    // Call the function to find indices and store the result
    auto result = find_indices(arr, target);
    
    // Check the result and print accordingly
    if (result.first == "YES") {
        cout << result.first << endl; // Print "YES"
        cout << "[" << result.second[0] << ", " << result.second[1] << "]" << endl; // Print the indices
    } else {
        cout << result.first << "[-1, -1]" << endl; // Print "NO" if no pair found
    }

    return 0; // Indicate that the program ended successfully
}
