// Problem   : Count Frequencies
// Approach  : unordered_map to count frequency of each element,
//             then push each map entry into result vector
// Time      : O(n)
// Space     : O(n)

#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> countFrequencies(vector<int> &nums)
{
    unordered_map<int, int> freq;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;

    vector<vector<int>> result;
    for (auto &p : freq)
        result.push_back({p.first, p.second});

    return result;
}

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    vector<vector<int>> ans = countFrequencies(nums);

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i][0] << " " << ans[i][1] << "\n";

    return 0;
}