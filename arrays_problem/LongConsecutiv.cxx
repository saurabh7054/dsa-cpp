#include <iostream>
#include <vector>
#include <algorithm>  // for sorting

int longestConsecutiveSequence(std::vector<int>& nums) {
    // Edge case: if the array is empty
    if (nums.empty()) {
        return 0;
    }

    // Sort the array
    std::sort(nums.begin(), nums.end());

    // Initialize variables
    int longestStreak = 1;
    int currentStreak = 1;

    // Traverse the array and find the longest consecutive sequence
    for (int i = 1; i < nums.size(); i++) {
        // If the current number is a duplicate of the previous one, skip it
        if (nums[i] == nums[i - 1]) {
            continue;
        }

        // Check if the current number forms a consecutive sequence with the previous one
        if (nums[i] == nums[i - 1] + 1) {
            currentStreak++;
        } else {
            // Update the longest streak
            longestStreak = std::max(longestStreak, currentStreak);
            // Reset the current streak
            currentStreak = 1;
        }
    }

    // Return the maximum of the longest streak and the current streak
    return std::max(longestStreak, currentStreak);
}

int main() {
    std::vector<int> nums = {100, 200, 1, 3, 2, 4};

    int result = longestConsecutiveSequence(nums);
    std::cout << "Longest consecutive sequence length is: " << result << std::endl;

    return 0;
}
