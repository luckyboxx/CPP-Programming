#include <iostream>
using namespace std;

// 기본 클래스
class distance {
public:
	double mile; // 두 지점 간의 거리
	distance() { mile = 0; }
	distance(double a) { mile = a; } // 생성자
	virtual void trav_time() { // 걸리는 시간(가상함수)
		double time;
		time = mile / 60; // 시속 60(mile)
		cout << "걸리는 시간: " << time << "시간" << endl; // 시속 60 mile일 때
	}
};

// 파생 클래스
class metric : public distance {
public:
	metric(double a) { mile = a; } // 생성자
	void trav_time() { // 걸리는 시간
		double km, time;
		km = mile * 1.609;
		time = km / 100; // 시속 100(km)
		cout << "걸리는 시간: " << time << "시간" << endl;
	}
};

// 시간을 출력
int main() {
	metric :: distance mile(900);
	metric km(800);

	mile.trav_time();
	km.trav_time();

    return 0;
}