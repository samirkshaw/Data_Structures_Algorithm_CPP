// Problem: Single Number (every element appears twice except one)
// Approach: XOR all elements together. Since a^a=0 and a^0=a, every number
//           that appears twice cancels itself out, leaving only the number
//           that appears once.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int singleNumber(vector<int> &nums)
{
    int result = 0;

    for (int i = 0; i < nums.size(); i++)
    {
        result = result ^ nums[i];
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
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int result = singleNumber(nums);

    cout << "The element that appears only once is: " << result << "\n";

    return 0;
}