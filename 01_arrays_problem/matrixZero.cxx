#include <iostream>
#include <vector>

using namespace std;

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    vector<bool> rowMark(rows, false);  // To mark rows that should be zeroed
    vector<bool> colMark(cols, false);  // To mark columns that should be zeroed

    // Step 1: Mark the rows and columns that need to be set to zero
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (matrix[i][j] == 0) {
                rowMark[i] = true;
                colMark[j] = true;
            }
        }
    }

    // Step 2: Set the rows and columns to zero based on marks
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            if (rowMark[i] || colMark[j]) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    setZeroes(matrix);

    // Output the modified matrix
    for (const auto& row : matrix) {
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}
