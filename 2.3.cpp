#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    float x,a,b;
    cout<<"Nhập a: ";
    cin>>a;
    cout<<"Nhập b: ";
    cin>>b;

    if(a == 0){
        if(b == 0)
        cout << "Equation has no solution. " << endl;
        else
        cout << "Equation with countless solutions. " << endl;
    }
    else{
        cout << "Equation has a unique solution: x = " << -b/a << endl;
    }
}