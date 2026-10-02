// Problem: Number of Rotations in a Rotated Sorted Array
// Approach: Same as Find Minimum - the index of the minimum element equals the number of right rotations performed.
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
    cout << "Enter " << n << " rotated sorted elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] > nums[high]) {
            low = mid + 1;
        } else {
            high = mid;
        }
    }

    cout << "The array was rotated " << low << " times\n";

    return 0;
}
