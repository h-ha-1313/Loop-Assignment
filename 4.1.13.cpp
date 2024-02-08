#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n; cin>>n;
    int cnt=0, sum=0;

    while(n>0){
        int digit = n%10;
        n /= 10;

        sum += digit;
        cnt++;
    }

    cout<<"Number of digits: "<< cnt << endl;
    cout<<"Sum of positive digits: "<< sum <<endl;
}