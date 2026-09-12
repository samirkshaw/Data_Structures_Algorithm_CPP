#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given an m x n matrix, if an element is 0, set its entire row
         and column to 0.

Approach: Use the first row and first column as markers to record which
          rows and columns need to be zeroed. Separate boolean variables
          handle whether the first row or first column originally contains 0.

Time: O(m * n)
Space: O(1)
*/

void setZeroes(vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    bool firstRowHasZero = false;
    bool firstColHasZero = false;

    for (int j = 0; j < cols; j++)
        if (matrix[0][j] == 0)
            firstRowHasZero = true;

    for (int i = 0; i < rows; i++)
        if (matrix[i][0] == 0)
            firstColHasZero = true;

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][0] = 0;
                matrix[0][j] = 0;
            }
        }
    }

    for (int i = 1; i < rows; i++) {
        for (int j = 1; j < cols; j++) {
            if (matrix[i][0] == 0 || matrix[0][j] == 0) {
                matrix[i][j] = 0;
            }
        }
    }

    if (firstRowHasZero)
        for (int j = 0; j < cols; j++)
            matrix[0][j] = 0;

    if (firstColHasZero)
        for (int i = 0; i < rows; i++)
            matrix[i][0] = 0;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> matrix = {
        {1, 1, 1},
        {1, 0, 1},
        {1, 1, 1}
    };

    cout << "Original Matrix:\n";

    for (auto& row : matrix) {
        for (int x : row)
            cout << x << " ";
        cout << "\n";
    }

    setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:\n";

    for (auto& row : matrix) {
        for (int x : row)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
