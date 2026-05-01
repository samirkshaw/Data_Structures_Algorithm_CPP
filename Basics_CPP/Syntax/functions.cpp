// Problem : Write a function isPrime(int n) that returns true if n is prime, false otherwise.
//         Print "Prime" or "Not Prime".
// Approach : use of function

#include <bits/stdc++.h>
using namespace std;

bool is_Prime(int n){
    if(n <= 1){
        return false;
    }
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    if(is_Prime(n)){
        cout << "Prime" << "\n";
    }
    else{
        cout << "Not Prime" << "\n";
    }
    return 0;
}