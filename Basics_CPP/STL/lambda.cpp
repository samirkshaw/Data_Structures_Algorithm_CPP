#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<pair<int,int>>v ;
    int n;
    cin >> n;
    for(int i=0;i<n;i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a,b});
    }
    sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int> b){
        return a.second > b.second; // sort based on second element of pair
    });
    for (auto x : v){
        cout << "{" << x.first << " " << x.second << "}" << " ";
    }
    return 0;
}