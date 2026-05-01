#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector <int> v; // declaration of vector
    for (int i =0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    set <int> s(v.begin(), v.end()); // declaration of set

    for (auto x : s){
        cout << x << " ";
    }
    int x;
    cin >> x;
    if (s.find(x) != s.end()){
        cout << "Element found in the set." << "\n";
    }
    else{
        cout << "Element not found in the set." << "\n";
    }
    return 0;
}