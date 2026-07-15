// Problem: Remove Duplicates from Sorted Array
// Approach: Two-pointer technique. Pointer k marks the position of the last
//           unique element placed. Traverse with i, and whenever nums[i] != nums[k],
//           move k forward and place nums[i] there. Works in-place since array is sorted.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int removeDuplicates(vector<int> &nums)
{
    int n = nums.size();
    int k = 0;

    for (int i = 1; i < n; i++)
    {
        if (nums[i] != nums[k])
        {
            k++;
            nums[k] = nums[i];
        }
    }

    return k + 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the sorted array: \n";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " sorted elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int newLength = removeDuplicates(nums);

    cout << "The number of unique elements is: " << newLength << "\n";
    cout << "The array after removing duplicates is: ";
    for (int i = 0; i < newLength; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}