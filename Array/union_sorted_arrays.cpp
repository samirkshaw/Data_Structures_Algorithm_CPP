// Problem: Union of Two Sorted Arrays
// Approach: Two pointers i, j starting at 0 for nums1, nums2. Compare elements;
//           push the smaller one to the union array only if it's different from
//           the last element added (or if union is empty, push unconditionally).
//           When equal, nums1[i] <= nums2[j] takes the nums1 branch, pushes once,
//           then next iteration nums2[j] matches the last-added value and gets
//           skipped, advancing j. After one array is exhausted, append remaining
//           elements from the other, same duplicate check.
// Time Complexity: O(n + m)
// Space Complexity: O(n + m) for the union array

#include <bits/stdc++.h>
using namespace std;

vector<int> findUnion(vector<int> nums1, vector<int> nums2)
{
    int n1 = nums1.size();
    int n2 = nums2.size();
    int i = 0, j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2)
    {
        if (nums1[i] <= nums2[j])
        {
            if (unionArr.empty() || unionArr.back() != nums1[i])
            {
                unionArr.push_back(nums1[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.empty() || unionArr.back() != nums2[j])
            {
                unionArr.push_back(nums2[j]);
            }
            j++;
        }
    }

    while (i < n1)
    {
        if (unionArr.empty() || unionArr.back() != nums1[i])
        {
            unionArr.push_back(nums1[i]);
        }
        i++;
    }

    while (j < n2)
    {
        if (unionArr.empty() || unionArr.back() != nums2[j])
        {
            unionArr.push_back(nums2[j]);
        }
        j++;
    }

    return unionArr;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n1, n2;
    cout << "Enter the number of elements in the first sorted array: \n";
    cin >> n1;
    vector<int> nums1(n1);
    cout << "Enter " << n1 << " sorted elements: \n";
    for (int i = 0; i < n1; i++)
        cin >> nums1[i];

    cout << "Enter the number of elements in the second sorted array: \n";
    cin >> n2;
    vector<int> nums2(n2);
    cout << "Enter " << n2 << " sorted elements: \n";
    for (int i = 0; i < n2; i++)
        cin >> nums2[i];

    vector<int> result = findUnion(nums1, nums2);

    cout << "The union of the two sorted arrays is: ";
    for (int val : result)
    {
        cout << val << " ";
    }
    cout << "\n";

    return 0;
}