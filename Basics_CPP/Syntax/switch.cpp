/*Problem: Given the integer day denoting the day number, print on the screen which day of the week it is. 
        Week starts from Monday and for values greater than 7 or less than 1, print Invalid.
Approach: use of switch statement*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cin >> day;
    switch(day){
        case 1:
            cout << "Monday" << "\n";
            break;
        case 2:
            cout << "Tuesday" << "\n";
            break;
        case 3:
            cout << "Wednesday" << "\n";
            break;
        case 4:
            cout << "Thursday" << "\n";
            break;
        case 5:
            cout << "Friday" << "\n";
            break;
        case 6:
            cout << "Saturday" << "\n";
            break;
        case 7:
            cout << "Sunday" << "\n";
            break;
        default:
            cout << "Invalid" << "\n";
    }
    return 0;
}