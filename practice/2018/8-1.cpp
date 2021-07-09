#include <iostream>
#include <math.h>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int p1, int p2)
	{
		x = p1;
		y = p2;
	}

	float origin_distance();
};

// 원점까지의 거리 계산

float point :: origin_distance() {
	float i = x * x;
	float j = y * y;

	return sqrt(i + j);
}

int main() {
	point p1(3, 4), p2(-1, -5);
	cout << "p1의 원점거리 = " << p1.origin_distance() << endl;
	cout << "p2의 원점거리 = " << p2.origin_distance() << endl;

	return 0;
}
