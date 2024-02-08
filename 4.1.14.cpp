#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int n; cin>>n;
    int cntOdd = 0;
    int cntEven = 0;

    while(n>0){
        int digit = n%10;
        n /= 10;

        if(digit % 2 == 0) cntEven++;
        else cntOdd++;
    }

    cout<<"Số chẵn: "<<cntEven<<endl;
    cout<<"Số lẻ: "<<cntOdd<<endl;
}
