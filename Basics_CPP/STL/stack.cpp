#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    stack <int> s; // declaration of stack
    for (int i =0; i<n; i++){
        int x;
        cin >> x;
        s.push(x);
    }
    while(!s.empty()){
        cout << s.top() << " ";
        s.pop();    
    }
    return 0;
}