// Problem: Pascal's Triangle - first n rows
// Approach: Build each row from the previous one; row[j] = prevRow[j-1] + prevRow[j], edges stay 1.
// Time: O(n^2)
// Space: O(n^2) for output

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int numRows;
    cout << "Enter the number of rows: ";
    cin >> numRows;

    vector<vector<int>> result;
    for (int i = 0; i < numRows; i++) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++) {
            row[j] = result[i - 1][j - 1] + result[i - 1][j];
        }
        result.push_back(row);
    }

    cout << "Pascal's Triangle with " << numRows << " rows:\n";
    for (auto &row : result) {
        for (int x : row) cout << x << " ";
        cout << "\n";
    }

    return 0;
}
