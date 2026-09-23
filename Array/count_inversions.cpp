// Problem: Count Inversions in an array
// Approach: Merge-sort based counting - recursively sort both halves, count cross-inversions during merge in O(1) per comparison using the sorted property.
// Time: O(n log n)
// Space: O(n) for temp array

#include <bits/stdc++.h>
using namespace std;

long long mergeSortCount(vector<int>& nums, vector<int>& temp, int left, int right) {
    if (left >= right) return 0;

    int mid = left + (right - left) / 2;
    long long count = mergeSortCount(nums, temp, left, mid) + mergeSortCount(nums, temp, mid + 1, right);

    int i = left, j = mid + 1, k = left;
    while (i <= mid && j <= right) {
        if (nums[i] <= nums[j]) {
            temp[k++] = nums[i++];
        } else {
            count += (mid - i + 1);
            temp[k++] = nums[j++];
        }
    }
    while (i <= mid) temp[k++] = nums[i++];
    while (j <= right) temp[k++] = nums[j++];

    for (int x = left; x <= right; x++) nums[x] = temp[x];

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    vector<int> temp(n);
    long long inversions = mergeSortCount(nums, temp, 0, n - 1);

    cout << "The number of inversions is " << inversions << "\n";

    return 0;
}
