// Problem: Merge Intervals
// Approach: Sort intervals by start; scan and merge into the last result interval whenever current start <= last end, keeping the max end.
// Time: O(n log n)
// Space: O(n) for output

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of intervals: ";
    cin >> n;

    vector<vector<int>> intervals(n, vector<int>(2));
    cout << "Enter " << n << " intervals as start end pairs:\n";
    for (int i = 0; i < n; i++) {
        cin >> intervals[i][0] >> intervals[i][1];
    }

    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;
    result.push_back(intervals[0]);
    for (int i = 1; i < n; i++) {
        if (intervals[i][0] <= result.back()[1]) {
            result.back()[1] = max(result.back()[1], intervals[i][1]);
        } else {
            result.push_back(intervals[i]);
        }
    }

    cout << "The merged intervals are:\n";
    for (auto &iv : result) {
        cout << "[" << iv[0] << ", " << iv[1] << "]\n";
    }

    return 0;
}
