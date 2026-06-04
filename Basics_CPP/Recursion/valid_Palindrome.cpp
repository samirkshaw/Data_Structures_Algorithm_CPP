/*
  Problem   : Valid Palindrome
  Platform  : LeetCode
  Approach  : Filter alphanumeric + lowercase → build reverse → compare
  Time      : O(n)
  Space     : O(n)
*/

#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s)
{
    string o, t;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] <= 'z' && s[i] >= 'a' || s[i] <= 'Z' && s[i] >= 'A' || s[i] <= '9' && s[i] >= '0')
        {
            if (s[i] <= 'Z' && s[i] >= 'A')
            {
                s[i] = s[i] + 32;
            }
            o += s[i];
        }
    }
    for (int i = o.length() - 1; i >= 0; i--)
    {
        t += o[i];
    }
    if(o == t)
    {
        return true;
    }
    return false;
}

int main()
{
    string s;
    cout << "Enter the string: ";
    getline(cin, s);
    cout << isPalindrome(s) << "\n";
    return 0;
}