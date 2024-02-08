#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    long long a,b,c;
    //cout<<"Enter a: ";
    cin>>a;
    //cout<<"Enter b: ";
    cin>>b;
    //cout<<"Enter c: ";
    cin>>c;

    if(a>b) swap(a,b);
    if(b>c) swap(b,c);
    if(a>b) swap(a,b);

    cout<<a<<" "<<b<<" "<<c;
}