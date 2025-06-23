// input = {1,3,2,-1,-3,-1,1};
// output = {1,-1,3,-3,2,-1,1};

#include<iostream>
#include<vector>
using namespace std;

void rearrangeArrEle(vector<int>& arr, int n) {
    vector<int> result(n); // Temporary array to store result
    int positive = 0, negative = 1; // Start indices for positive and negative elements

    for (int &num : arr) {
        if (num > 0) {
            result[positive] = num;
            positive += 2;
        } else {
            result[negative] = num;
            negative += 2;
        }
    }

    // Copy result back to original array
    for (int i = 0; i < n; i++) {
        arr[i] = result[i];
    }
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    rearrangeArrEle(arr, n);
    
    cout << "Rearranged array elements are: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
