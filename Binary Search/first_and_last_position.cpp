// Problem: Find First and Last Position of Element in Sorted Array
// Approach: Two biased binary searches - one that keeps narrowing left on a match (first occurrence), one that keeps narrowing right (last occurrence).
// Time: O(log n)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int findFirst(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            high = mid - 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

int findLast(vector<int>& nums, int target) {
    int low = 0, high = nums.size() - 1, ans = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            ans = mid;
            low = mid + 1;
        } else if (nums[mid] < target) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }
    return ans;
}

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

    int first = findFirst(nums, target);
    int last = (first == -1) ? -1 : findLast(nums, target);

    cout << "First and last position of " << target << " are: [" << first << ", " << last << "]\n";

    return 0;
}
