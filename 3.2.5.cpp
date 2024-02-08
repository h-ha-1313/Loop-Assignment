#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

double res(int n) {
    double tong = 0.0;
    double tich = 1.0;

    for (int i = 0; i <= n; ++i) {
        if (i > 0) {
            tich *= i; 
        }

        tong += 1.0 / tich; 
    }

    return tong;
}

int main() {
    int n;
    cin >> n;

    cout << res(n) <<endl;

    return 0;
}