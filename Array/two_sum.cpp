// Problem: Two Sum
// Approach: Hash map. Traverse the array once; for each element, check if
//           (target - nums[i]) has already been seen in the map. If yes,
//           the pair is found immediately (map's stored index + current index).
//           If not, store the current value and its index in the map for
//           future lookups, then continue.
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
    unordered_map<int, int> seen;
    int n = nums.size();

    for (int i = 0; i < n; i++)
    {
        int complement = target - nums[i];

        if (seen.find(complement) != seen.end())
        {
            return {seen[complement], i};
        }

        seen[nums[i]] = i;
    }

    return {};
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

    int target;
    cout << "Enter the target sum: \n";
    cin >> target;

    vector<int> result = twoSum(nums, target);

    if (!result.empty())
    {
        cout << "The indices that sum to " << target << " are: " << result[0] << " and " << result[1] << "\n";
    }
    else
    {
        cout << "No two numbers sum to " << target << "\n";
    }

    return 0;
}