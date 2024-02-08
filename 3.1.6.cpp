#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n, x;
    cin>>n>>x;
    
    long long tong=0, tich=1;

    for(int i=1; i<=n; i++){
        tich = pow(x,n);
        tong+=tich;
    }

    cout<<tong;
}