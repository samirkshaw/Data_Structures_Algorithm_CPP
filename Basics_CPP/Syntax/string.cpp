// Problem: Given a string, print it in reverse without using
//           any built - in reverse function.
// Approach : use of string and for loop

#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin >> str;
    string reversed = "";
    for(int i = (int)str.length() - 1; i >= 0; i--){
        reversed += str[i];
    }
    cout << reversed << "\n";

// another question: Given a string, convert it to uppercase without using any built-in function.
// Approach: use of string and for loop,
// the difference between ASCI value of the upper and lowercase is 32.
    string s;
    cin >> s;
    for(int i =0; i<s.length();i++){
        cout << (char)(s[i]-32);
    }

    return 0;
}


