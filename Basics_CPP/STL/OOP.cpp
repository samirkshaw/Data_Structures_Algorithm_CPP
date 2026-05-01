#include <bits/stdc++.h>
using namespace std;

class Rectangle{
    private:
    int length;
    int breadth;
    public:
    Rectangle(int l, int b){
        length = l;
        breadth = b;
    }
    int area(){
        return length * breadth;
    }
    int perimeter(){
        return 2*(length + breadth);
    }
};
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int l,b,m,n;
    cin >> l >> b >> m >> n ;
    Rectangle r(l,b);
    Rectangle r2(m,n);
    cout << r.area() << "\n";
    cout << r.perimeter() << "\n";
    cout << r2.area() << "\n";
    cout << r2.perimeter() << "\n";
    return 0;
}