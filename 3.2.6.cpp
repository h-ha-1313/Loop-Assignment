#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

double calculateSeries(double x, int n) {
    double res = 0.0;
    int sign = 1; 

    for (int i = 0; i <= n; ++i) {
        int exponent = 2 * i + 1;
        double term = pow(x, exponent) / tgamma(exponent + 1);
        res += sign * term;
        sign *= -1; 
    }

    return res;
}

int main() {
    double x;
    int n;

    cin >> x >> n;

    if (n < 0) {
        cout << "INVALID" << endl;
        return 1;
    }

    double result = calculateSeries(x, n);

    cout << result << endl;

    return 0;
}
