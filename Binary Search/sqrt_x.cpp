// Problem: Sqrt(x) - floor of the square root
// Approach: Binary search for the largest mid such that mid*mid <= x; that value IS the floor, no rounding needed.
// Time: O(log x)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x;
    cout << "Enter a non-negative integer: ";
    cin >> x;

    int low = 0, high = x, ans = 0;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        if (mid * mid <= x) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    cout << "The floor of the square root of " << x << " is " << ans << "\n";

    return 0;
}
