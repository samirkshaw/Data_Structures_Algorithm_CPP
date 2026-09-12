#include <bits/stdc++.h>
using namespace std;

/*
Problem: Rotate an n x n matrix 90 degrees clockwise.

Approach: First transpose the matrix by swapping matrix[i][j] with
          matrix[j][i]. Then reverse every row. This produces a
          90-degree clockwise rotation.

Time: O(n^2)
Space: O(1)
*/

void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();

    // Transpose
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // Reverse every row
    for (int i = 0; i < n; i++) {
        reverse(matrix[i].begin(), matrix[i].end());
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    cout << "Original Matrix:\n";

    for (auto& row : matrix) {
        for (int x : row)
            cout << x << " ";
        cout << "\n";
    }

    rotate(matrix);

    cout << "\nMatrix after 90-degree clockwise rotation:\n";

    for (auto& row : matrix) {
        for (int x : row)
            cout << x << " ";
        cout << "\n";
    }

    return 0;
}
