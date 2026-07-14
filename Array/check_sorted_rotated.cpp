// Problem: Check if Array is Sorted and Rotated (LeetCode 1752) - Optimized
// Approach: Traverse the array counting "breaks" where nums[i] < nums[i-1]
//           (non-decreasing check). Also check the wraparound point
//           nums[n-1] > nums[0], which counts as an extra break if true.
//           If total breaks <= 1, the array is sorted and rotated -> true.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

bool check(vector<int> nums)
{
    int n = nums.size();
    int breaks = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] < nums[i - 1])
        {
            breaks++;
        }
    }

    if (nums[n - 1] > nums[0])
    {
        breaks++;
    }

    return breaks <= 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: \n";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    bool result = check(nums);
    cout << "Is the array sorted and rotated: " << (result ? "true" : "false") << "\n";

    return 0;
}