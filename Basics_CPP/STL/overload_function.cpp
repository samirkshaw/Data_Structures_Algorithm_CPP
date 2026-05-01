#include<bits/stdc++.h>
using namespace std;

float area(float r){
    return 3.14*r*r;
}
int area(int l, int h){
    return l*h;
}
int power(int base, int exponent=2){
    int result = 1;
    for (int i =0; i<exponent; i++){
        result *= base;
    }
    return result;
}

int main(){
    float r;
    int l,h,base,exponent;
    cin >> r >> l >> h >> base >> exponent;
    cout << area(r) << "\n";
    cout << area(l,h) << "\n";
    cout << power(base,exponent) << "\n" ;
    cout << power(base) << "\n"; // uses default exp=2, should print base²
    return 0;

}