#include<bits/stdc++.h>
using namespace std;

void update(int &x , int &y){
    x = x*2; //doublet
    y = y*y;  // square
}

int main(){
    int a,b;
    cin >> a >>b;
    update(a,b);
    cout << a << " " << b << "\n";
    
}