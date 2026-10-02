// Problem: Floor and Ceil of x in a sorted array
// Approach: Binary search with an equality short-circuit (x itself is both floor and ceil); otherwise final high/low give floor/ceil.
// Time: O(log n)
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
    cout << "Enter " << n << " sorted elements: ";
    for (int i = 0; i < n; i++) cin >> nums[i];

    int x;
    cout << "Enter x: ";
    cin >> x;

    int low = 0, high = n - 1;
    int floorVal = -1, ceilVal = -1;
    bool found = false;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (nums[mid] == x) {
            floorVal = ceilVal = nums[mid];
            found = true;
            break;
        } else if (nums[mid] < x) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if (!found) {
        floorVal = (high >= 0) ? nums[high] : -1;
        ceilVal = (low <= n - 1) ? nums[low] : -1;
    }

    cout << "Floor of " << x << " is " << floorVal << "\n";
    cout << "Ceil of " << x << " is " << ceilVal << "\n";

    return 0;
}
