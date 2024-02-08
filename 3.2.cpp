#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;
long long sum = 0;

int cnt(int n, long long sum){
    for(int i=1; i<=n; i++){
        if(i%4==0 && i%5!=0) sum+=i;
    }
    return sum;
}

int main(){
    //cout<<"Enter n: ";
    cin>>n;
    cout<<cnt(n,sum);
}