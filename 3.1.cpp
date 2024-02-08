#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;
long long sum=0;

/*
int total(int n, long long sum){
    for(int i=1; i<=n; i++){
        sum+=i;
    }
    return sum;
}
*/

int main(){
    //cout<<"Enter n: ";
    cin>>n;
    //cout<<total(n,sum);
    cout<<((n+1)*n/2);
}