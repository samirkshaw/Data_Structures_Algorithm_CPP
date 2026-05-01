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
    sort(v.begin(), v.end());
    for (int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
    cout << "\n";
    cout << *max_element(v.begin(), v.end()) << "\n";
    cout << *min_element(v.begin(), v.end()) << "\n";
    reverse(v.begin(), v.end());
    for (int i = 0; i<n; i++){
        cout << v[i] << " ";
    }
    return 0;
}