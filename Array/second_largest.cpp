// Problem: Find the Second Largest Element in an Array
// Approach: Initialize max as first element and secMax as second element.
//           Traverse from index 1 onward. If current element > max, update
//           secMax = old max, then max = current. Else if current element > secMax
//           and current element != max, update secMax.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int findSecondLargest(vector<int> arr)
{
    int max = arr[0];
    int secMax = arr[1];

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            secMax = max;
            max = arr[i];
        }
        else if (arr[i] > secMax && arr[i] != max)
        {
            secMax = arr[i];
        }
    }

    return secMax;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "\n" << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "\n" << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = findSecondLargest(arr);
    cout << "\n" << "The second largest element in the array is: " << result << "\n";

    return 0;
}