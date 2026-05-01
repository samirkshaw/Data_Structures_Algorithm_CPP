// Problem : Given marks of a student, print on the screen :
//           Grade A if marks >= 90
//           Grade B if marks >= 70
//           Grade C if marks >= 50
//           Grade D if marks >= 35
//           Fail,otherwise.
// Approach : use of if-else statement
#include <bits/stdc++.h>
using namespace std;

int main(){
    int marks;
    cin >> marks;

    if(marks >= 90){
        cout << "Grade A" << "\n";
    }
    else if(marks >= 70){
        cout << "Grade B" << "\n";
    }
    else if(marks >= 50){
        cout << "Grade C" << "\n";
    }
    else if(marks >= 35){
        cout << "Grade D" << "\n";
    }
    else{
        cout << "Fail" << "\n";
    }
    return 0;
}