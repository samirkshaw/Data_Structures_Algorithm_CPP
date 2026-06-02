// Problem   : Reverse an Array
// Approach  : Recursion (swap elements from both ends toward center)
// Time      : O(n)
// Space     : O(1)

#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n){
    for(int i=0;i<n/2;i++){
        int temp;
        temp = arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;
    }
}

int main(){
    int n;
    cout << "Enter the size of the array: " ;
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i =0;i<n;i++)
        cin >> arr[i];
    reverse(arr,n);
    cout << "Reversed array: ";
    for(int i =0;i<n;i++)
        cout << arr[i] << " ";
    return 0;
}