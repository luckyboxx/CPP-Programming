#include <iostream>
using namespace std;

class three_d {
private:
	int x, y, z;
public:
	three_d() { x = y = z = 0; }
	three_d(int i, int j, int k) { x = i; y = j; z = k; }
	three_d operator * (three_d op2);
	three_d operator = (three_d op2);
    three_d operator--();
    three_d operator--(int notused);
	void show();
};

three_d three_d::operator * (three_d op2) {
	three_d temp;
	temp.x = x * op2.x;
	temp.y = y * op2.y;
	temp.z = z * op2.z;

	return temp;
}

three_d three_d::operator = (three_d op2) {
	x = op2.x;
	y = op2.y;
	z = op2.z;

	return *this;
}

three_d three_d::operator--() {
    x--;
    y--;
    z--;
    return *this;
}

three_d three_d::operator--(int notused) {
	three_d temp = *this;
    x--;
    y--;
    z--;

	return temp;
}

void three_d::show() { cout << x << ", " << y << ", " << z << endl; }
int main() {
	three_d a(1, 2, 3), b(10, 10, 10), c;
	a.show();
	b.show();

	c = a * b;
	c.show();

	c = a * b * c;
	c.show();

	c = b = a;
	c.show();
	b.show();

    --c;
    c.show();

    c--;
    c.show();

    a = --c;
    a.show();
    c.show();

    a = c--;
    a.show();
    c.show();

	return 0;
}