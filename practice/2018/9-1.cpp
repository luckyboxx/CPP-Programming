#include <iostream>
using namespace std;

class three_d {
	int x, y, z; // 3-D 좌표
public:
	three_d() {	x = y = z = 0; }
	three_d(int i, int j, int k) { x = i; y = j; z = k;	}
	three_d operator * (three_d op2); // op1을 포함하고 있다.
	void show();
};

// +를 중복한다.
three_d three_d::operator * (three_d op2) {
	three_d temp;
	temp.x = x * op2.x; // 이 문장들은 정수 덧셈이고
	temp.y = y * op2.y; // + 는 정수 덧셈과 관련된
	temp.z = z * op2.z; // 원래의 의미를 갖는다.
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