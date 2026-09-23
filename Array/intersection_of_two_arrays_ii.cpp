// Problem: Intersection of Two Arrays II
// Approach: Sort both arrays, use two pointers to walk them simultaneously - advance the pointer pointing to the smaller value, collect matches.
// Time: O(n log n + m log m)
// Space: O(min(n, m)) for output

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in nums1: ";
    cin >> n;

    vector<int> nums1(n);
    cout << "Enter " << n << " elements of nums1: ";
    for (int i = 0; i < n; i++) cin >> nums1[i];

    int m;
    cout << "Enter the number of elements in nums2: ";
    cin >> m;

    vector<int> nums2(m);
    cout << "Enter " << m << " elements of nums2: ";
    for (int i = 0; i < m; i++) cin >> nums2[i];

    sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());

    vector<int> result;
    int i = 0, j = 0;
    while (i < n && j < m) {
        if (nums1[i] == nums2[j]) {
            result.push_back(nums1[i]);
            i++;
            j++;
        } else if (nums2[j] > nums1[i]) {
            i++;
        } else {
            j++;
        }
    }

    cout << "The intersection array is:\n";
    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}
