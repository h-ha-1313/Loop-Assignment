#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int hours, minutes, seconds;
    cin>> hours>> minutes >> seconds;

    if(hours < 0 || hours > 60 || minutes < 0 || minutes > 60 || seconds <0 || seconds >60){
        cout<<"INVALID";
    }
    else cout<<"VALID";
}