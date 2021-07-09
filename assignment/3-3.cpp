#include <iostream>
using namespace std;

class coord {
private:
	int x, y; // 좌표 값

public:
	coord()	{ x = 0; y = 0;	}
	coord(int i, int j)	{ x = i; y = j; }
	void get_xy(int &i, int &j)	{ i = x; j = y; }
	void show()	{ cout << x << ", " << y << endl; }
	coord& operator--();
	coord operator--(int i);
};

coord& coord:: operator--() {
	x--;
	y--;
	return *this;
}
coord coord:: operator--(int i) {
	coord temp(x, y);
	x--;
	y--;
	return temp;
}

int main() {
	coord a(10, 10), b(5, 3);
	cout << "a"; a.show();
	cout << "b"; b.show();
	cout << endl;
	cout << "--a => a"; (--a).show(); // 선행(prefix) 표기
	cout << "b-- => b"; (b--).show(); // 후행(postfix) 표기
	return 0;
}
