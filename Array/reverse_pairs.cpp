// Problem: Reverse Pairs
// Approach: Use merge sort. Count reverse pairs across the two sorted halves before merging.
// Time: O(n log n)
// Space: O(n)

#include <bits/stdc++.h>
using namespace std;

int merge(vector<int>& nums, int low, int mid, int high) {
    int count = 0;
    int j = mid + 1;

    for (int i = low; i <= mid; i++) {
        while (j <= high && (long long)nums[i] > 2LL * nums[j]) {
            j++;
        }
        count += j - (mid + 1);
    }

    vector<int> temp;
    int left = low;
    j = mid + 1;

    while (left <= mid && j <= high) {
        if (nums[left] <= nums[j]) {
            temp.push_back(nums[left]);
            left++;
        } else {
            temp.push_back(nums[j]);
            j++;
        }
    }

    while (left <= mid) {
        temp.push_back(nums[left]);
        left++;
    }

    while (j <= high) {
        temp.push_back(nums[j]);
        j++;
    }

    for (int i = low; i <= high; i++) {
        nums[i] = temp[i - low];
    }

    return count;
}

int mergeSort(vector<int>& nums, int low, int high) {
    if (low >= high) return 0;

    int mid = low + (high - low) / 2;

    int count = 0;
    count += mergeSort(nums, low, mid);
    count += mergeSort(nums, mid + 1, high);
    count += merge(nums, low, mid, high);

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

    int result = mergeSort(nums, 0, n - 1);

    cout << "The number of reverse pairs is: " << result << "\n";

    return 0;
}
