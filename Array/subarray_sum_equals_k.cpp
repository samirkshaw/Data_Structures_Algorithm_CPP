#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given an array nums and an integer k, find the total number of
         continuous subarrays whose sum equals k.

Approach: Use a running prefix sum and a hash map to store the frequency
          of each prefix sum. For the current sum, if (sum - k) has
          appeared before, those previous prefix sums form subarrays
          ending at the current index whose sum is k.

Time: O(n) average
Space: O(n)
*/

int subarraySum(vector<int>& nums, int k) {
    int count = 0;
    int sum = 0;

    unordered_map<int, int> freq;
    freq[0] = 1;

    for (int x : nums) {
        sum += x;

        if (freq.find(sum - k) != freq.end()) {
            count += freq[sum - k];
        }

        freq[sum]++;
    }

    return count;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {1, 2, 3};
    int k = 3;

    cout << "Array: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    cout << "Target Sum: " << k << "\n\n";

    int result = subarraySum(nums, k);

    cout << "Number of subarrays with sum " << k << ": " << result << "\n";

    return 0;
}
