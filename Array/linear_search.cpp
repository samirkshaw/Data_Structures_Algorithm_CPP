// Problem: Linear Search - Find Smallest Index of Target
// Approach: Traverse the array sequentially. If the current element equals
//           target, return its index immediately. If loop completes without
//           finding it, return -1.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int linearSearch(vector<int> nums, int target)
{
    int n = nums.size();
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            return i;
        }
    }
    return -1;
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
    cout << "Enter the target to search for: \n";
    cin >> target;

    int result = linearSearch(nums, target);

    if (result != -1)
    {
        cout << "The target " << target << " is found at index: " << result << "\n";
    }
    else
    {
        cout << "The target " << target << " was not found in the array.\n";
    }

    return 0;
}