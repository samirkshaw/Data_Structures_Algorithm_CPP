// Problem: Merge Sorted Array (in-place, nums1 has trailing buffer space)
// Approach: Fill nums1 from the back using three pointers, so every write lands in an already-read or empty slot.
// Time: O(m+n)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m;
    cout << "Enter m (number of real elements in nums1): ";
    cin >> m;

    int n;
    cout << "Enter n (number of elements in nums2): ";
    cin >> n;

    vector<int> nums1(m + n);
    cout << "Enter " << m << " elements of nums1: ";
    for (int i = 0; i < m; i++) cin >> nums1[i];

    vector<int> nums2(n);
    cout << "Enter " << n << " elements of nums2: ";
    for (int i = 0; i < n; i++) cin >> nums2[i];

    int i = m - 1, j = n - 1, k = m + n - 1;
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }

    cout << "The merged array is:\n";
    for (int x : nums1) cout << x << " ";
    cout << "\n";

    return 0;
}
