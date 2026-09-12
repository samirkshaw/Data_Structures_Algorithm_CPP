#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given an m x n matrix, return all elements of the matrix
         in spiral order.

Approach: Use four boundaries — top, bottom, left, and right.
          Traverse the matrix layer by layer:
          left to right, top to bottom, right to left, bottom to top.
          After each traversal, move the corresponding boundary inward.

Time: O(m * n)
Space: O(m * n)
*/

vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> ans;

    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {

        // Left to right
        for (int i = left; i <= right; i++) {
            ans.push_back(matrix[top][i]);
        }
        top++;

        // Top to bottom
        for (int i = top; i <= bottom; i++) {
            ans.push_back(matrix[i][right]);
        }
        right--;

        // Right to left
        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                ans.push_back(matrix[bottom][i]);
            }
            bottom--;
        }

        // Bottom to top
        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                ans.push_back(matrix[i][left]);
            }
            left++;
        }
    }

    return ans;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    cout << "Matrix:\n";

    for (auto& row : matrix) {
        for (int x : row) {
            cout << x << " ";
        }
        cout << "\n";
    }

    cout << "\nSpiral Order: ";

    vector<int> result = spiralOrder(matrix);

    for (int x : result) {
        cout << x << " ";
    }

    cout << "\n";

    return 0;
}
