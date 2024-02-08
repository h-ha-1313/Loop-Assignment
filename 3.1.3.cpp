#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;
long long sum=0;

int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        sum+=1/i;
    }
    cout<<sum;
}