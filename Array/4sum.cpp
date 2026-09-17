// Problem: 4Sum - find all unique quadruplets summing to target
// Approach: Sort array, fix two elements with nested loops, use two pointers on the remaining two to find pairs summing to target - (nums[i]+nums[j]). Skip duplicates at each level.
// Time: O(n^3)
// Space: O(1) extra (excluding output)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    long long target;
    cout << "Enter the target sum: ";
    cin >> target;

    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < n - 3; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        for (int j = i + 1; j < n - 2; j++) {
            if (j > i + 1 && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = n - 1;
            while (left < right) {
                long long sum = (long long)nums[i] + nums[j] + nums[left] + nums[right];
                if (sum == target) {
                    result.push_back({nums[i], nums[j], nums[left], nums[right]});
                    while (left < right && nums[left] == nums[left + 1]) left++;
                    while (left < right && nums[right] == nums[right - 1]) right--;
                    left++;
                    right--;
                } else if (sum < target) {
                    left++;
                } else {
                    right--;
                }
            }
        }
    }

    cout << "The unique quadruplets summing to the target are:\n";
    for (auto &quad : result) {
        cout << "(" << quad[0] << ", " << quad[1] << ", " << quad[2] << ", " << quad[3] << ")\n";
    }
    cout << "Total quadruplets found: " << result.size() << "\n";

    return 0;
}
