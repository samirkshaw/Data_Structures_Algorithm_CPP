// Problem: Search Insert Position
// Approach: Binary search; if not found, the final low pointer is exactly the correct insert index.
// Time: O(log n)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            low = mid;
            break;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "The insert position for " << target << " is index " << low << "\n";

    return 0;
}
