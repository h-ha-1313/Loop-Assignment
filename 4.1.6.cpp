#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main(){
    int cntOneDollars, cntTwoDollars, cntFiveDollars;

    for (int cntOneDollars = 0; cntOneDollars <= 20; ++cntOneDollars) {
        for (int cntTwoDollars = 0; cntTwoDollars <= 20 / 2; ++cntTwoDollars) {
            for (int cntFiveDollars = 0; cntFiveDollars <= 20 / 5; ++cntFiveDollars) {
                int total = cntOneDollars + 2 * cntTwoDollars + 5 * cntFiveDollars;

                if (total == 20) {
                    std::cout << "1 dollars: " << cntOneDollars << ", 2 dollars: " << cntTwoDollars << ", 5 dollars: " << cntFiveDollars << endl;
                }
            }
        }
    }
}