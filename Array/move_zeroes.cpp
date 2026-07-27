// Problem: Move Zeroes to the End (LeetCode 283)
// Approach: Two-pointer swap. insertPos marks where the next non-zero
//           element should go. Traverse with i; whenever nums[i] != 0,
//           swap nums[i] and nums[insertPos], then insertPos++.
//           Non-zero elements settle in order at front, zeros shift to back.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void moveZeroes(vector<int> &nums)
{
    int n = nums.size();
    int insertPos = 0;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            swap(nums[i], nums[insertPos]);
            insertPos++;
        }
    }
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

    moveZeroes(nums);

    cout << "The array after moving zeroes to the end is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}