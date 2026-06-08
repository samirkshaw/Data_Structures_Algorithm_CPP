// Problem   : Contains Duplicate/
// Approach  : unordered_set to track seen elements, if element already
//             exists in set → duplicate found → return true
// Time      : O(n)
// Space     : O(n)

#include <bits/stdc++.h>
using namespace std;

bool containsDuplicate(vector<int> &nums)
{
    unordered_set<int> seen;
    for (int i = 0; i < nums.size(); i++)
    {
        if (seen.count(nums[i]))
            return true;
        seen.insert(nums[i]);
    }
    return false;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    if (containsDuplicate(nums))
        cout << "true\n";
    else
        cout << "false\n";

    return 0;
}