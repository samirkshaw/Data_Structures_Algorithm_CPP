// Problem: Longest Subarray with Sum Equal to k (array can contain any integers)
// Approach: Prefix sum + hash map. Maintain a running prefix sum while scanning.
//           At each index, check if (prefixSum - k) has been seen before in the map -
//           if so, the subarray between that earlier index and now sums to exactly k.
//           Store only the earliest index for each prefix sum value (to maximize length).
//           Pre-seed map with {0: -1} to handle subarrays starting from index 0.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int> &nums, int k)
{
    int n = nums.size();
    unordered_map<int, int> prefixIndex;
    prefixIndex[0] = -1;

    int sum = 0, maxLen = 0;

    for (int i = 0; i < n; i++)
    {
        sum += nums[i];

        if (prefixIndex.find(sum - k) != prefixIndex.end())
        {
            maxLen = max(maxLen, i - prefixIndex[sum - k]);
        }

        if (prefixIndex.find(sum) == prefixIndex.end())
        {
            prefixIndex[sum] = i;
        }
    }

    return maxLen;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: \n";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (can include negatives): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int k;
    cout << "Enter the target sum k: \n";
    cin >> k;

    int result = longestSubarray(nums, k);

    cout << "The length of the longest subarray with sum " << k << " is: " << result << "\n";

    return 0;
}