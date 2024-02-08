#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;
int main() {
    int sum = 0;

    for(int i=1; i<=1000; i++){
        sum+=i;
        if(sum>1000){
            cout<<i;
            break;
        }
    }
}

