// Problem: 3Sum - find all unique triplets summing to zero
// Approach: Sort array, fix one element, use two pointers on the rest to find pairs summing to -nums[i]. Skip duplicates at each level.
// Time: O(n^2)
// Space: O(1) extra (excluding output)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    sort(nums.begin(), nums.end());
    vector<vector<int>> result;

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) continue;
        int left = i + 1, right = n - 1;
        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];
            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});
                while (left < right && nums[left] == nums[left + 1]) left++;
                while (left < right && nums[right] == nums[right - 1]) right--;
                left++;
                right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    cout << "The unique triplets summing to zero are:\n";
    for (auto &triplet : result) {
        cout << "(" << triplet[0] << ", " << triplet[1] << ", " << triplet[2] << ")\n";
    }
    cout << "Total triplets found: " << result.size() << "\n";

    return 0;
}
