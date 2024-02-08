
#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
    for (int x = 1; x <= 9; x++) {
        for (int y = 0; y <= 9; y++) {
            int num = x * 10 + y;
            int tich = x * y;
            int tong = x + y;

            if (tich == 2 * tong) {
                cout << num << endl;
            }
        }
    }
}