// Problem : Print all even numbers from 1 to N(N given by user).
// Approach : use of for loop

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i+=2){
        if(i % 2 == 0){
            cout << i << " ";
        }
    }
    cout << "\n";
    return 0;
}