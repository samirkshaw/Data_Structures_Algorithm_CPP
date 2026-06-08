// Problem: You are given an integer n. You need to return the number of digits in the number.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, cnt =0;
    cin >> n;
    n = abs(n);
    if (n == 0)
    {
        cout << 1 << "\n";
        return 0;
    }
    while (n > 0)
    {
        n /= 10;
        cnt++;
    }
    cout << cnt << "\n";
return 0;
}