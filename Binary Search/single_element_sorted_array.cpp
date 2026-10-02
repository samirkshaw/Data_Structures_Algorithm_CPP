// Problem: Single Element in a Sorted Array (every other element appears twice)
// Approach: Force mid to even, then check if its pair (mid, mid+1) is intact - intact means the single element is still ahead, broken means it's at or before mid.
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

    int low = 0, high = n - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (mid % 2 == 1) mid--;
        if (nums[mid] == nums[mid + 1]) {
            low = mid + 2;
        } else {
            high = mid;
        }
    }

    cout << "The single element appearing once is " << nums[low] << "\n";

    return 0;
}
