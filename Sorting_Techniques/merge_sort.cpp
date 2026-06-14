// Problem  : Merge Sort
// Approach : Divide array into halves recursively, merge sorted halves
//            using temp vector and two pointers
// Time     : O(n log n)
// Space    : O(n)

#include <bits/stdc++.h>
using namespace std;
void merge(vector<int> &arr, int l, int mid, int r)
{
    int i = l, j = mid + 1;
    vector<int> temp;
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
            temp.push_back(arr[i++]);
        else
            temp.push_back(arr[j++]);
    }
    while (i <= mid)
        temp.push_back(arr[i++]);
    while (j <= r)
        temp.push_back(arr[j++]);
    for (int i = 0; i < temp.size(); i++)
        arr[l + i] = temp[i];
}
void mergeSort(vector<int> &arr, int l, int r)
{
    if (l < r)
    {
        int mid = l + (r - l) / 2;
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);
        merge(arr, l, mid, r);
    }
}
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    return 0;
}