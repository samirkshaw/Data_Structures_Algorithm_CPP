// Problem: Sort Colors (Dutch National Flag)
// Approach: Three pointers - low, mid, high. If nums[mid]==0, swap with low,
//           advance both low and mid. If nums[mid]==1, it's already correctly
//           placed, just advance mid. If nums[mid]==2, swap with high and
//           decrement high only (don't advance mid, since the swapped-in
//           element from high hasn't been checked yet).
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums)
{
    int n = nums.size();
    int low = 0, mid = 0, high = n - 1;

    while (mid <= high)
    {
        if (nums[mid] == 0)
        {
            swap(nums[mid], nums[low]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1)
        {
            mid++;
        }
        else
        {
            swap(nums[mid], nums[high]);
            high--;
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
    cout << "Enter " << n << " elements (0s, 1s, and 2s): \n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    sortColors(nums);

    cout << "The array sorted by color is: ";
    for (int i = 0; i < n; i++)
    {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}
