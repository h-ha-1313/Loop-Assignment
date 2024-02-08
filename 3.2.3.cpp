#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n;
    cin>>n;

    int maxDigit = 0;
    int minDigit = 9;

    while(n>0){
        int digit = n%10;
        n /= 10;

        maxDigit = max(maxDigit, digit);
        minDigit = min(minDigit, digit);
    }

    cout<<maxDigit<<endl;
    cout<<minDigit<<endl;
}