#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

void printMultiplicationTable(int number) {
    for (int i = 1; i <= 9; ++i) {
        cout << number << " x " << i << " = " << (number * i) << endl;
    }
}

int main() {
    int number;
    //cout << "Enter number: ";
    cin >> number;

    cout << "Multiplication Table for " << number << " :" << endl;
    printMultiplicationTable(number);

    return 0;
}