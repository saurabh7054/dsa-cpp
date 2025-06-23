#include <iostream>
#include <set>
#include <vector>
using namespace std;

vector<int> findUnion(int arr1[], int n, int arr2[], int m) {
    set<int> s; // Use a set to store unique elements

    // Insert elements of arr1
    for (int i = 0; i < n; i++) {
        s.insert(arr1[i]);
    }

    // Insert elements of arr2
    for (int i = 0; i < m; i++) {
        s.insert(arr2[i]);
    }

    // Convert the set into a vector (or array)
    vector<int> result(s.begin(), s.end());
    return result;
}

int main() {
    int n = 5, m = 5;
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {2, 3, 4, 4, 5};

    vector<int> unionArray = findUnion(arr1, n, arr2, m);

    // Print the result
    cout << "{";
    for (size_t i = 0; i < unionArray.size(); i++) {
        cout << unionArray[i];
        if (i < unionArray.size() - 1) cout << ", ";
    }
    cout << "}" << endl;

    return 0;
}
