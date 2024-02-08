#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int sum(int n) 
{ 
    if (n <= 1) 
        return n; 
    return sum(n - 1) + sum(n - 2); 
}

int main(){
    int n;
    cin>>n;

    cout<<sum(n);
}