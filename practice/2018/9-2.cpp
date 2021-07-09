#include <iostream>
using namespace std;

class three_d {
	int x, y, z; // 3-D 좌표
public:
	three_d() {	x = y = z = 0; }
	three_d(int i, int j, int k) {x = i; y = j; z = k; }
	friend three_d operator * (three_d op1, three_d op2); // op2를 포함하고 있다.
	void show();
};

three_d operator * (three_d op1, three_d op2) {
	three_d temp;
	temp.x = op1.x * op2.x;
	temp.y = op1.y * op2.y;
	temp.z = op1.z * op2.z;
	return temp;
}

// X, Y, Z 좌표값을 출력한다.
void three_d::show() { cout << x << ", " << y << ", " << z << endl; }

int main() {
	three_d a(5, 10, 15), b(1, 2, 3), c;
	a.show();
	b.show();
	c = a * b; // a와 b를 곱한다.
	c.show();

	return 0;
}