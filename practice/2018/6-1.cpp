#include <iostream>
using namespace std;

class box {
private:
	double x, y, z;
	double volume; // 부피
public:
	void initbox(double a, double b, double c); // 생성자
	void calcvolume(); // 부피를 계산하는 함수
	int vol(); // 부피를 반환하는 함수
};

void box::initbox(double a, double b, double c) { x = a; y = b;	z = c; }
void box::calcvolume() { volume = x * y * z; }
int box::vol() { return volume; }

int main() {
	double a, b, c;
	box mybox;
	cin >> a >> b >> c;
	mybox.initbox(a, b, c);
	mybox.calcvolume();
	cout << mybox.vol();
	return 0;
}