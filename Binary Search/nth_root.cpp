// Problem: Nth Root of M - find X such that X^N == M exactly, else -1
// Approach: Binary search for floor of the Nth root (safe power-check with overflow early-exit), then verify ans^N == M exactly.
// Time: O(N log M)
// Space: O(1)

#include <bits/stdc++.h>
using namespace std;

bool isPowerLessOrEqual(long long mid, int n, long long x) {
    long long product = 1;
    for (int i = 0; i < n; i++) {
        product *= mid;
        if (product > x) return false;
    }
    return product <= x;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N, M;
    cout << "Enter N: ";
    cin >> N;
    cout << "Enter M: ";
    cin >> M;

    int low = 1, high = M, ans = 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (isPowerLessOrEqual(mid, N, M)) {
            ans = mid;
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    long long product = 1;
    for (int i = 0; i < N; i++) {
        product *= ans;
        if (product > M) break;
    }

    if (product == M) {
        cout << "The " << N << "th root of " << M << " is " << ans << "\n";
    } else {
        cout << "No integer " << N << "th root exists for " << M << "\n";
    }

    return 0;
}
