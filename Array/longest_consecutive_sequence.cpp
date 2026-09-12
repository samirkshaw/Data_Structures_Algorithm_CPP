#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given an unsorted array of integers, find the length of the
         longest consecutive elements sequence.

Approach: Store all numbers in an unordered_set for O(1) average lookup.
          Only start building a sequence when num - 1 does not exist,
          meaning num is the beginning of a sequence. Then count forward.

Time: O(n) average
Space: O(n)
*/

int longestConsecutive(vector<int>& nums) {
    unordered_set<int> numSet(nums.begin(), nums.end());

    int longest = 0;

    for (int num : numSet) {
        if (numSet.find(num - 1) == numSet.end()) {
            int length = 1;

            while (numSet.find(num + length) != numSet.end()) {
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {100, 4, 200, 1, 3, 2};

    cout << "Array: ";
    for (int x : nums)
        cout << x << " ";
    cout << "\n\n";

    int result = longestConsecutive(nums);

    cout << "Length of Longest Consecutive Sequence: " << result << "\n";

    return 0;
}
