#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int day, month, year;
    //cout<<"Enter a month: ";
    cin>>month;
    //cout<<"Enter a year: ";
    cin>>year;

    if(month<0 || month>12 || year<0){
        cout<<"INVALID";
    }

    else if(month == 2){
        if(year%400 == 0 || year%4 == 0) cout<<"Number of days are: 29";
        else cout<<"Number of days are: 28";
    }

    else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        cout<< "Number of days are: 31";
    }

    else cout<< "Number of days are: 30";
}