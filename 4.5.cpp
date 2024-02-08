#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n,m;
    int Max=0;
    cin>>n>>m;

    for(int i=1; i<=n; i++){
        if(n%i==0 && m%i==0){
            Max=i;
        }
    }
    cout<<Max;
}