// Problem  : Recursive Bubble Sort
// Approach : Each call does one full pass bubbling largest to end,
//            recurse with n-1 to shrink unsorted portion
// Time     : O(n^2)
// Space    : O(n) stack

#include <bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int> &nums, int n)
{
    if (n == 1)
        return nums;
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1])
            swap(nums[i], nums[i + 1]);
    }
    return helper(nums, n - 1);
}
vector<int> bubbleSort(vector<int> &nums)
{
    return helper(nums, nums.size());
}
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<int> ans = bubbleSort(nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}