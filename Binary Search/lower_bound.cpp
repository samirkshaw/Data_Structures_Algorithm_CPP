// Problem: Lower Bound - first index where nums[i] >= target
// Approach: Binary search; on nums[mid] >= target, record mid as a candidate and keep narrowing left for an earlier one.
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

    int low = 0, high = n - 1, ans = n;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << "Lower bound index for " << target << " is " << ans << "\n";

    return 0;
}
