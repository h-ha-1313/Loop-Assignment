#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int r,h;
    cin>>r>>h;
    if(r<=0 || h<=0) cout<<"INVALID"<<endl;
    else{
        cout<<"a. S_đáy: "<< M_PI*r*r <<endl;
        cout<<"b. S_xung quanh: "<< 2*M_PI*r*h <<endl;
        cout<<"c. V: "<< M_PI*r*r*h <<endl;
    }
}