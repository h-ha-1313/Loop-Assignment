#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    long long a,b,c;
    //cout<<"Enter a: ";
    cin>>a;
    //cout<<"Enter b: ";
    cin>>b;
    //cout<<"Enter c: ";
    cin>>c;

    if(a+b>c && a+c>b && c+b>a){
        cout<<"This is a triangle."<<endl;
        if (a == b && b == c) {
            cout << " This is a equilateral triangle." <<endl;
        } else if (a == b || b == c || c == a) {
            if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
                cout << "This is a right-angled isosceles triangle." <<endl;
            } else {
                cout << "This is a isosceles triangle." <<endl;
            }
        } else {
            if (a * a + b * b == c * c || b * b + c * c == a * a || c * c + a * a == b * b) {
                cout << "This is a right-angled scalene triangle." <<endl;
            } else {
                cout << "This is a scalene triangle." <<endl;
            }
        }
    }
    else cout<<"This is not a triangle."<<endl;
}