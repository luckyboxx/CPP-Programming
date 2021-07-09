#include <iostream>
using namespace std;


class coord {
private:
	int x, y;

public:
	coord()	{ x = 0;	y = 0; }
	coord(int i, int j)	{ x = i; y = j; }
	void get_xy(int &i, int &j)	{ i = x; j = y; }
	int operator == (coord op);
	int operator && (int i);

};

int coord:: operator == (coord op) {
	if (x == op.x && y == op.y)
		return 1;
	else
		return 0;
}

int coord:: operator && (int i) {
	if (0 && 0)
		return 0;
	else if (0 && 1)
		return 0;
	else if (1 && 0)
		return 0;
	else
		return 1;
}

int main() {
	coord a(9, 8), b(10, 8), c(5, 3), d(5, 3), e;

	cout << "[1] a(9, 8), b(10, 8), c(5, 3), d(10, 3)" << endl;
	cout << "[2] a(9, 8), b(10, 8), c(5, 3), d(5, 3)" << endl;
	cout << "[3] a(9, 8), b(9, 8), c(5, 3), d(10, 3)" << endl;
	cout << "[4] a(9, 8), b(9, 8), c(5, 3), d(5, 3)" << endl;

	int num;

	while(1) {
		cout << "위 4가지 유형 중 하나를 선택하십시오: ";
		cin >> num;

		switch (num) {
		case 1:
			e = d;
			if (a == b && c == d)
				cout << "True" << endl << endl;
			else
				cout << "False" << endl << endl;
			break;
		case 2:
			d = c;
			if (a == b && c == d)
				cout << "True" << endl << endl;
			else
				cout << "False" << endl << endl;
			break;
		case 3:
			d = e; b = a;
			if (a == b && c == d)
				cout << "True" << endl << endl;
			else
				cout << "False" << endl << endl;
			break;
		case 4:
			d = c;
			if (a == b && c == d)
				cout << "True" << endl << endl;
			else
				cout << "False" << endl << endl;
			return 0;
		}
	}
}
