#include <iostream>
using namespace std;

class coord {
private:
	int x, y; // 좌표 값

public:
	coord()	{ x = 0; y = 0;	}
	coord(int i, int j)	{ x = i; y = j;	}
	void get_xy(int &i, int &j)	{ i = x; j = y;	}
	void show() { cout << x << ", " << y << endl; }
	coord operator*(coord op2);
	coord operator/(coord op2);
};

coord coord:: operator * (coord op2) {
	coord temp;
	temp.x = x * op2.x;
	temp.y = y * op2.y;
	return temp;
}

coord coord:: operator / (coord op2) {
	coord temp;
	temp.x = x / op2.x;
	temp.y = y / op2.y;
	return temp;
}

int main() {
	coord a(10, 10), b(5, 3), c, d;
	int x, y;
	c = a * b;
	c.show();
	d = a / b;
	d.show();
	return 0;
}
