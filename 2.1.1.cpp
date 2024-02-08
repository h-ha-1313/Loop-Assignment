#include<bits/stdc++.h>
#define _USE_MATH_DEFINES
using namespace std;

int main() {
    double a, b, c;

    //cout << "Enter a: ";
    cin >> a;
    //cout << "Enter b: ";
    cin >> b;
    //cout << "Enter c: ";
    cin >> c;

    double delta = b * b - 4 * a * c;

    if (delta > 0) {
        double x1 = (-b + sqrt(delta)) / (2 * a);
        double x2 = (-b - sqrt(delta)) / (2 * a);

        cout << "Nghiệm 1: " << x1 <<endl;
        cout << "Nghiệm 2: " << x2 <<endl;
    } else if (delta == 0) {
        double x = -b / (2 * a);

        cout << "Nghiệm: " << x <<endl;
    } else {
        double nghiemThuc = -b / (2 * a);
        double nghiemAo = sqrt(-delta) / (2 * a);

        std::cout << "Nghiệm 1: " << nghiemThuc << " + " << nghiemAo << "i" <<endl;
        std::cout << "Nghiệm 2: " << nghiemThuc << " - " << nghiemAo << "i" <<endl;
    }
}
