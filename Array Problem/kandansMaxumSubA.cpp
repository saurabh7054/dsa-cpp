#include <iostream>
#include <vector>
#include <algorithm> // for std::max

int maxSubArray(const std::vector<int>& nums) {
    if (nums.empty()) return 0; // Handle edge case for empty array

    int current_sum = nums[0];  // Initialize current sum with the first element
    int max_sum = nums[0];      // Initialize global max sum with the first element

    // Traverse the array starting from the second element
    for (size_t i = 1; i < nums.size(); ++i) {
        // Update current_sum: either extend the current subarray or start a new one
        current_sum = std::max(nums[i], current_sum + nums[i]);
        
        // Update max_sum if current_sum is larger
        max_sum = std::max(max_sum, current_sum);
    }

    return max_sum; // Return the maximum subarray sum
}

int main() {
    std::vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << "Maximum subarray sum is :" << maxSubArray(arr) << std::endl;
    return 0;
}
