#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int money;
    cin >> money;

    int ten = money / 10;
    int five = (money % 10) / 5;
    int two = ((money % 10) % 5) / 2;
    int one = ((money % 10) % 5) % 2;

    cout<<"N = "<<money<<" dollars"<<" = "<< ten <<" * 10 dollar bill + "<< five <<" * 5 dollar bill + "<< two <<" * 2 dollar bill + "<< one <<" * 1 dollar bill ";
}