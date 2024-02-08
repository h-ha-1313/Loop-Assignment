#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int length, width;
    cin>>length>>width;

    for(int i=1; i<=width; i++){
        for(int j=1; j<=length; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}