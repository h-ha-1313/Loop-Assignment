#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;

    cout<<"Least common multiple: "<< (n*m)/__gcd(n,m) << endl;
}