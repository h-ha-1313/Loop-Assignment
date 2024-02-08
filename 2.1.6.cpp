#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int k;
    //cout<<"Enter kilometer: ";
    cin>>k;

    float sum = 1.0;
    if(k>=2 && k<=5){
        sum += (k-1)*0.9;
    }
    else if(k>=6){
        sum += 4*0.9 + (k-5)*0.7;
    }
    if(k>120)
        sum = (1 + 4*0.9 + (k-5)*0.7)*0.9;
    
    cout<<sum;
}