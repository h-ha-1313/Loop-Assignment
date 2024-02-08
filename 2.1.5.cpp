#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    char n;
    //cout<<"Enter a character: ";
    cin>>n;

    if(n>65 && n<90){
        cout<<char(n+32);
    }
    else cout<<char(n-32);
}