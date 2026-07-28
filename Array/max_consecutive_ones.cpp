// Problem: Find Max Consecutive Ones (LeetCode 485)
// Approach: Single pass with two variables - a running counter and a max tracker.
//           Traverse the array; if current element is 1, increment counter and
//           update max if counter exceeds it. If current element is 0, reset
//           counter to 0. No extra vector needed.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int findMaxConsecutiveOnes(vector<int> &nums) {
    int n = nums.size();
    int count = 0, maxCount = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] == 1) {
            count++;
            maxCount = max(maxCount, count);
        } else {
            count = 0;
        }
    }

    return maxCount;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: \n";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (0s and 1s): \n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    int result = findMaxConsecutiveOnes(nums);

    cout << "The maximum consecutive 1s in the array is: " << result << "\n";

    return 0;
}