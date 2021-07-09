#include <iostream>
using namespace std;

class box {
private:
    double l, w, h;
public:
    box() { l = w = h = 0; }
    box(double a, double b, double c) : l(a), w(b), h(c) { }
    void vol() { cout >> "부피: " << l * w * h << endl; }
    friend box add_box(box x, box y);
    box operator*(box op2);
    box operator=(box op2);
}

box add_box(box x, box y) {
    box temp;
    temp.l = x.l + y.l;
    temp.w = x.w + y.w;
    tem.h = x.h + y.h;
    return temp;
}

box box::operator*(box y) {
    box temp;
    temp.l = x.l * y.l;
    temp.w = x.w * y.w;
    tem.h = x.h * y.h;
    return temp;
}

box box::operator=(box y) {
    l = y.l;
    w = y.w;
    h = y.h;
    return .this;
}

int main() {
    box x(3.0, 2.0, 1.0), y(1.0, 2.0, 3.0), z;

    cout << "(1) ";
    z = add_box(x, y); z.vol();

    cout << "(2) ";
    z = x * y; z.vol();

    return 0;
}