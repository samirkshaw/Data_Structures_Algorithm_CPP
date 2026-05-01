// Problem : Keep taking numbers as input until user enters 0. 
//           Print the sum of all entered numbers.
// Approach : use of do-while loop

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int sum = 0;
    do{
        cin >> n;
        sum += n;
    }while(n != 0);
    cout << "Sum of all entered numbers is " << sum << "\n";
    return 0;
}