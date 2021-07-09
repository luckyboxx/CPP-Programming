#include <iostream>
#include <cstring>
using namespace std;

class MyException {
public:
    double divide(double a, double b);
};

double MyException::divide(double a, double b) {
    try {
        cout << "Enter numerator and denominator: ";
        if (!b)
            throw b;
        else
            return a / b;
    }
    catch (double b) {
        cout << "Cannot divide by zero!" << endl;
    }

    return 0;
}

int main() {
    MyException e;
    cout << e.divide(10, 0) << endl << endl;
    cout << e.divide(20, 0) << endl << endl;

    return 0;
}