#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int x;
    cin>>x;
    cout<<"y1 = "<< double(4*(x*x + 10*x*sqrt(x) + 3*x + 1)) <<endl;
    cout<<"y2 = "<< double((sin(M_PI*x*x) + sqrt(x*x + 1)) / (pow(M_E,2*x) + cos((M_PI/4)*x))) <<endl;
}