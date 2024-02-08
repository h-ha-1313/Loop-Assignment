#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

bool areIncreasing(int n) {
    int lastDigit = n % 10; //hàng đơn vị
    n /= 10;

    while (n > 0) {
        int currentDigit = n % 10; //hàng tiếp theo
        if (currentDigit >= lastDigit) {//trái hơn phải (false)
            return false;  
        }
        lastDigit = currentDigit; //nếu ko thì lặp lại vòng lặp
        n /= 10;
    }

    return true;  
}

bool areDecreasing(int n) {
    int lastDigit = n % 10;
    n /= 10;

    while (n > 0) {
        int currentDigit = n % 10;
        if (currentDigit <= lastDigit) {
            return false; 
        }
        lastDigit = currentDigit;
        n /= 10;
    }

    return true;
}

int main() {
    int num;
    cin >> num;

    if (areIncreasing(num)) {
        cout << "Increasing" <<endl;
    } else if (areDecreasing(num)) {
        cout << "Decreasing" <<endl;
    } else {
        cout << "None of them" <<endl;
    }
}