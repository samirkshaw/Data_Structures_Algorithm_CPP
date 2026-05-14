// Problem: Palindrome Number
// Approach: Reverse only half the number and compare.
// Avoids overflow without needing long long.
// Odd length: middle digit dropped via revertedNumber/10
// Time Complexity: O(log n) & Space Complexity: O(1)

#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(int x){
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    int remainder, reverse = 0;
    while (x > reverse)
    {
        reverse = reverse * 10 + x % 10;
        x /= 10;
    }
    return x == reverse || x == reverse / 10;
}
int main(){
    int n;
    cout << "Enter a number: ";
    cin >> n;
    if (isPalindrome(n))
        cout << "Palindrome" << endl;
    else
        cout << "Not a Palindrome" << endl;
    return 0;
}