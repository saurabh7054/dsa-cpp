#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
    stack<int> st;
    unordered_map<int, int> ngeMap; // stores next greater for each element in nums2

    // Traverse nums2 from right to left to build the map
    for (int i = nums2.size() - 1; i >= 0; --i) {
        int curr = nums2[i];

        // Pop all smaller or equal elements
        while (!st.empty() && st.top() <= curr) {
            st.pop();
        }

        // Assign next greater or -1
        ngeMap[curr] = st.empty() ? -1 : st.top();

        // Push current element to stack
        st.push(curr);
    }

    // Build result for nums1 using map
    vector<int> result;
    for (int num : nums1) {
        result.push_back(ngeMap[num]);
    }

    return result;
}

int main() {
    vector<int> nums1 = {4, 1, 2};
    vector<int> nums2 = {1, 3, 4, 2};

    vector<int> result = nextGreaterElement(nums1, nums2);

    cout << "Next Greater Elements: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
