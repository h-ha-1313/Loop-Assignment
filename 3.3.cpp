#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int n;

bool isPrime(int num) {
    if (num < 2) {
        return false;
    }

    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int findMaxPrime(int n) {
    for (int i = n; i >= 2; --i) {
        if (isPrime(i)) {
            return i;
        }
    }

    return -1;
}

int main() {
    cin >> n;

    int Max = findMaxPrime(n);

    if (Max != -1) {
        cout << Max << endl;
    } else {
        cout << "No prime number found." << endl;
    }

}

