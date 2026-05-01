// Problem: Print a star pattern of a given size.
// Approach: use of nested loops

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        for(int j =1; j<= i;j++){
            cout << "* ";
        }
        cout << "\n";
    }
    return 0;
}