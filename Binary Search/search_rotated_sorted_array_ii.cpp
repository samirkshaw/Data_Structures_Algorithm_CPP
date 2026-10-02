// Problem: Search in Rotated Sorted Array II (duplicates allowed)
// Approach: Same half-sorted check as the distinct version, but when nums[low]==nums[mid] the signal is ambiguous - shrink by low++ and recheck.
// Time: O(log n) average, O(n) worst case due to duplicate runs
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
    cout << "Enter " << n << " elements (rotated sorted, may contain duplicates): ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    int target;
    cout << "Enter the target: ";
    cin >> target;

    int low = 0, high = n - 1;
    bool found = false;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            found = true;
            break;
        }
        if (nums[low] == nums[mid]) {
            low++;
            continue;
        }
        if (nums[low] < nums[mid]) {
            if (nums[low] <= target && target <= nums[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        } else {
            if (nums[mid] <= target && target <= nums[high]) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
    }

    cout << (found ? "Target exists in the array\n" : "Target does not exist in the array\n");

    return 0;
}
