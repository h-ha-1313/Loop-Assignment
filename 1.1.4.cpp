#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    float r;
    cin>>r;
    if(r<=0) cout<<"Tam giác không tồn tại.";
    else{
        cout<<"perimeter: " << 2*r*M_PI << endl;
        cout<<"area: " << r*r*M_PI << endl;
    }
}
