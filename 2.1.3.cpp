#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int a, b, c, d;
    int v[4];
    //cout<<"Enter a: ";
    cin>>a;
    //cout<<"Enter b: ";
    cin>>b;
    //cout<<"Enter c: ";
    cin>>c;
    //cout<<"Enter d: ";
    cin>>d;

    int maxNum = max({a,b,c,d});
    int minNum = min({a,b,c,d});

    cout<<"a. Max number: "<< maxNum <<", Min number: "<< minNum<< endl;
    cout<<"b. Other number: ";
    
    if(a!=maxNum && a!=minNum) cout<<a<<" ";
    if(b!=maxNum && b!=minNum) cout<<b<<" ";
    if(c!=maxNum && c!=minNum) cout<<c<<" ";
    if(d!=maxNum && d!=minNum) cout<<d;
}