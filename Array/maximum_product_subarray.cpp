// Problem: Maximum Product Subarray
// Approach: Track the maximum and minimum product ending at each position because a negative number can swap their roles.
// Time: O(n)
// Space: O(1)

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

    int maxProd = nums[0];
    int minProd = nums[0];
    int ans = nums[0];

    for (int i = 1; i < n; i++) {
        int curr = nums[i];

        int newMax = max({curr, curr * maxProd, curr * minProd});
        int newMin = min({curr, curr * maxProd, curr * minProd});

        maxProd = newMax;
        minProd = newMin;

        ans = max(ans, maxProd);
    }

    cout << "The maximum product is: " << ans << "\n";

    return 0;
}
