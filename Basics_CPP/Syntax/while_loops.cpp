// Problem : Given a number N, reverse its digits and print it.
// Approach : use of while loop

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int reversed = 0;
    while(n != 0){
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    cout << reversed << "\n";
    return 0;
}