#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int h1, m1, s1;
    int h2, m2, s2;

    cin>> h1>> m1>> s1;
    cin>> h2>> m2>> s2;

    //tính + - thành giây
    int sum = (h1+h2)*60*60 + (m1+m2)*60 + (s1+s2);
    int sub = abs((h1-h2)*60*60 + (m1-m2)*60 + (s1-s2));

    //đổi lại sum
    int smh = sum/3600;
    int smm = (sum % 3600) / 60;
    int sms = sum%60;

    //đổi lại sub
    int sbh = sub/3600;
    int sbm = (sub % 3600) / 60;
    int sbs = sub%60;

    //output
    cout<<smh<<" "<<smm<<" "<<sms<<endl;
    cout<<sbh<<" "<<sbm<<" "<<sbs<<endl;
}