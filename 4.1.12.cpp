#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n; cin>>n;
    int maxNum = 0, minNum = 9;

    while(n>0){
        int digit = n%10;
        n /= 10;

        maxNum = max(maxNum, digit);
        minNum = min(minNum, digit);
    }

    cout<<"Max digit: "<<maxNum<<endl;
    cout<<"Min digit: "<<minNum<<endl;
}