#include <iostream>
using namespace std;

class coord {
private:
	int x, y; // 좌표 값

public:
	coord()	{ x = 0; y = 0; }
	coord(int i, int j)	{ x = i; y = j; }
	void get_xy(int &i, int &j)	{ i = x; j = y; }
	void show()	{ cout << x << ", " << y << endl; }
	friend coord operator-(coord op1, coord op2);
	friend coord operator/(coord op1, coord op2);

};

coord operator-(coord op1, coord op2) {
	coord temp;
	temp.x = op1.x - op2.x;
	temp.y = op1.y - op2.y;
	return temp;
}

coord operator/(coord op1, coord op2) {
	coord temp;
	temp.x = op1.x / op2.x;
	temp.y = op1.y / op2.y;
	return temp;
}

int main() {
	coord a(10, 10), b(5, 3), c, d;
	cout << "c = a - b  -->  c";
	c = a - b;
	c.show();
	cout << "d = a / b  -->  d";
	d = a / b;
	d.show();
	return 0;
}
