#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n, sum=0;
    cin>>n;

    for(int i=1; i<=3; i++){
        sum += n%10;
        n /= 10;
    }

    cout<<sum;
}