#include <iostream>
using namespace std;

class point {
private:
	int x, y;
public:
	point(int p1, int p2) {	x = p1;	y = p2;	}
	float two_distance(point p2);
	friend float distance2(point p1, point p2); // point 클래스의 프렌드
};

float point::two_distance(point p2) {
	float a = (x - p2.x) * (x - p2.x);
	float b = (y - p2.y) * (y - p2.y);
	return sqrt(a + b);
}

float distance2(point p1, point p2) {
	float a = (p1.x - p2.x) * (p1.x - p2.x);
	float b = (p1.y - p2.y) * (p1.y - p2.y);
	return sqrt(a + b);
}

int main() {
	point p1(3, 4), p2(-1, -5);
	cout << "p1과 p2 거리 = " << p1.two_distance(p2) << endl;
	cout << "p1과 p2 거리 = " << distance2(p1,p2)<< endl;
}
