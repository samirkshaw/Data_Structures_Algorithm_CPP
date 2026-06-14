// Problem  : Recursive Insertion Sort
// Approach : Start from second last element, insert each element
//            rightward into sorted right portion, recurse backward
// Time     : O(n^2)
// Space    : O(n) stack
#include <bits/stdc++.h>
using namespace std;
vector<int> helper(vector<int> &nums, int n)
{
    if (n < 0)
        return nums;
    int key = nums[n], j = n + 1;
    while (j < nums.size() && nums[j] < key)
    {
        nums[j - 1] = nums[j];
        j++;
    }
    nums[j - 1] = key;
    return helper(nums, n - 1);
}
vector<int> insertionSort(vector<int> &nums)
{
    return helper(nums, nums.size() - 2);
}
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++)
        cin >> nums[i];
    vector<int> ans = insertionSort(nums);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
    return 0;
}