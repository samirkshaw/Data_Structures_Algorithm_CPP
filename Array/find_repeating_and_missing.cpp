// Problem: Find the Repeating and Missing Number
// Approach: Compare actual sum/sum-of-squares against the ideal range 1..n to set up two equations (B-A and B+A), solve for both.
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

    long long sumN = 0, sumNums = 0;
    long long sqSumN = 0, sqSumNums = 0;

    for (int i = 1; i <= n; i++) {
        sumN += i;
        sqSumN += (long long)i * i;
    }
    for (int num : nums) {
        sumNums += num;
        sqSumNums += (long long)num * num;
    }

    long long diffSum = sumN - sumNums;
    long long diffSq = sqSumN - sqSumNums;
    long long sumAB = diffSq / diffSum;

    long long B = (diffSum + sumAB) / 2;
    long long A = sumAB - B;

    cout << "The repeating number is " << A << " and the missing number is " << B << "\n";

    return 0;
}
