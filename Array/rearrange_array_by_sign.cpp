#include <bits/stdc++.h>
using namespace std;

/*
Problem: Given an array of equal counts of positive and negative integers,
         rearrange it so positive and negative numbers alternate, starting
         with a positive number, while preserving the relative order of
         each sign group. (Rearrange Array Elements by Sign)
Approach: Since positives and negatives are equal in count, positives always
          land on even indices (0,2,4...) and negatives on odd indices
          (1,3,5...) in the final arrangement. So do a single pass over the
          input, placing each element directly into its final slot in a new
          result array using two index pointers (posIdx, negIdx).
Time: O(n)
Space: O(n)  (result array required for a single-pass, order-preserving solution)

Note: A true in-place (O(1) extra space) version that preserves relative
      order is a much harder problem — it needs a cyclic rotation
      (juggling algorithm) since placing one element can cascade into
      needing to move others. Not implemented here; O(n) space is the
      realistic/expected solution for this problem.
*/

vector<int> rearrangeArray(vector<int>& nums) {
    vector<int> result(nums.size());
    int posIdx = 0, negIdx = 1;
    for (int x : nums) {
        if (x > 0) {
            result[posIdx] = x;
            posIdx += 2;
        } else {
            result[negIdx] = x;
            negIdx += 2;
        }
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    vector<int> nums = {3, 1, -2, -5, 2, -4};

    cout << "Input: ";
    for (int x : nums) cout << x << " ";
    cout << "\n";

    cout << "Placing each element directly into its final slot in one pass —\n";
    cout << "positives go to even indices, negatives to odd indices.\n\n";

    vector<int> result = rearrangeArray(nums);

    cout << "Rearranged: ";
    for (int x : result) cout << x << " ";
    cout << "\n";

    return 0;
}
