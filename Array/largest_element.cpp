// Problem: Find the Largest Element in an Array
// Approach: Take vector input from user, initialize max as the first element,
//           traverse the whole vector sequentially, and using if-else compare
//           each element with max, updating max whenever a bigger element is found.
//           Finally return max to main() and display it.
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

int findLargest(vector<int> arr)
{
    int max = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
        else
        {
            // element is not bigger, do nothing
        }
    }
    return max;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int result = findLargest(arr);
    cout << "The largest element in the array is: " << result << endl;

    return 0;
}