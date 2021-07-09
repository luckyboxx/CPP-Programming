#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;

    for (x = 2; x <= 20; x++) {
        cout.self(ios::showpos);
        cout.precision(5);
        cout.width(10);
        cout << log(x) << " ";

        cout.self(ios::showpos);
        cout.precision(5);
        cout.width(10);
        cout << log10(x) << " ";
    }
    return 0;
}