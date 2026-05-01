#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v; // declaration of vector
    for (int i =0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    priority_queue<int> pq(v.begin(), v.end()); // declaration of priority queue
    while (!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << "\n";
    priority_queue<int, vector<int>, greater<int>> pqm(v.begin(), v.end()); // declaration of min heap
    while (!pqm.empty()){
        cout << pqm.top() << " ";
        pqm.pop();
    }
    return 0;
}