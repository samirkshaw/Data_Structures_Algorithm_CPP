// Problem: Binary Search - find target index in sorted array
// Approach: Standard low/high/mid narrowing, halving the search space each
// step. Time: O(log n) Space: O(1)

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
  for (int i = 0; i < n; i++)
    cin >> nums[i];

  int target;
  cout << "Enter the target to search: ";
  cin >> target;

  int low = 0, high = n - 1, ans = -1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (nums[mid] == target) {
      ans = mid;
      break;
    } else if (nums[mid] < target) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }

  if (ans != -1)
    cout << "Target found at index " << ans << "\n";
  else
    cout << "Target not found\n";

  return 0;
}