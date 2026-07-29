// Problem: Majority Element (Boyer-Moore Voting Algorithm)
// Approach: Maintain a candidate and a count. If count reaches 0, pick the
//           current element as the new candidate. If current element matches
//           candidate, increment count; otherwise decrement count. Since the
//           majority element appears more than n/2 times, it always survives
//           as the final candidate.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int majorityElement(vector<int> &nums)
{
    int candidate = 0, count = 0;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        if (count == 0)
        {
            candidate = nums[i];
        }

        if (nums[i] == candidate)
        {
            count++;
        }
        else
        {
            count--;
        }
    }

    return candidate;
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

    int result = majorityElement(nums);

    cout << "The majority element is: " << result << "\n";

    return 0;
}