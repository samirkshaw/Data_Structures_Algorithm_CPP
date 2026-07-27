// Problem: Find the Missing Number (0 to n range)
// Approach: XOR-based technique. Since a ^ a = 0 and a ^ 0 = a, XOR all numbers
//           from 0 to n with all elements in the array. Every number that exists
//           in both the range and the array cancels out, leaving only the missing number.
//           Start result = n (to fold in the top of the range), then loop i = 0 to n-1,
//           XORing both the index i and the array value at that index into result.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int missingNumber(vector<int> &nums)
{
    int n = nums.size();
    int result = n;

    for (int i = 0; i < n; i++)
    {
        result = result ^ i ^ nums[i];
    }

    return result;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: \n";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements (distinct values from 0 to n, one missing): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = missingNumber(nums);

    cout << "The missing number is: " << result << "\n";

    return 0;
}