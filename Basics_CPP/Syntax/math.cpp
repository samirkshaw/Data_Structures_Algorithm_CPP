// Problem : Given a number N, 
//           print its multiplication table up to 10.
// Approach : use of for loop

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= 10; i++){
        cout << n << " * " << i << " = " << n*i << "\n";
    }
    return 0;
}