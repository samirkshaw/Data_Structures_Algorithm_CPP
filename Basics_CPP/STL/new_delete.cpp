
// Takes n as input
// Dynamically allocates an array of size n using new 
// Takes n integers as input into that array
// Prints them in reverse
// Deletes the array properly

#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i =0; i<n; i++){
        cin >> arr[i];
    }
    for (int i=n-1;i>=0;i--){
        cout << arr[i] << " ";
    }
    delete [] arr;
    return 0;

}