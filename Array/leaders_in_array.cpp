// Problem: Leaders in an Array
// Approach: Scan right to left tracking maxSoFar. Any element >= maxSoFar is
//           a leader. Reverse result at the end to restore original order.
// Time Complexity: O(n)
// Space Complexity: O(1) extra (excluding output array)
#include <bits/stdc++.h>
using namespace std;
vector<int> leaders(vector<int> &nums) {
    int n = nums.size();
    vector<int> result;
    int maxSoFar = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        if (nums[i] >= maxSoFar) {
            result.push_back(nums[i]);
            maxSoFar = nums[i];
        }
    }
    reverse(result.begin(), result.end());
    return result;
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
    vector<int> result = leaders(nums);
    cout << "The leaders are: ";
    for (int x : result) cout << x << " ";
    cout << "\n";
    return 0;
}
