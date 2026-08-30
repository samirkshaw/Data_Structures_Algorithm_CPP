// Problem: Next Permutation
// Approach: Find breakpoint from right (first nums[i] < nums[i+1]), swap it
//           with the smallest greater element in the suffix, then reverse
//           the suffix. If no breakpoint, reverse whole array.
// Time Complexity: O(n)
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
void nextPermutation(vector<int> &nums) {
    int n = nums.size();
    int i = n - 2;
    while (i >= 0 && nums[i] >= nums[i + 1]) {
        i--;
    }
    if (i >= 0) {
        int j = n - 1;
        while (nums[j] <= nums[i]) {
            j--;
        }
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cout << "Enter the number of elements in the array: \n";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " elements: \n";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    nextPermutation(nums);
    cout << "The next permutation is: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";
    return 0;
}
