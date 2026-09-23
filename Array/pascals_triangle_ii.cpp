// Problem: Pascal's Triangle II - return only rowIndex-th row
// Approach: Direct binomial coefficients using C(n,k) = C(n,k-1) * (n-k+1) / k, avoids building the whole triangle.
// Time: O(rowIndex)
// Space: O(rowIndex) for output

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int rowIndex;
    cout << "Enter the row index: ";
    cin >> rowIndex;

    vector<long long> row(rowIndex + 1);
    row[0] = 1;
    for (int k = 1; k <= rowIndex; k++) {
        row[k] = row[k - 1] * (rowIndex - k + 1) / k;
    }

    cout << "Row " << rowIndex << " of Pascal's Triangle is:\n";
    for (long long x : row) cout << x << " ";
    cout << "\n";

    return 0;
}
