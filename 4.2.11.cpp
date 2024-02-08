#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int transNumber(int num) {
    int trans = 0;

    while (num > 0) {
        int digit = num % 10;
        trans = trans * 10 + digit;
        num /= 10;
    }

    return trans;
}

int main() {
    int n;
    //cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 0) {
        cout << "INVALID" << endl;
    }

    int res = transNumber(n);
    cout << res << endl;
}