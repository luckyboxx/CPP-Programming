#include <iostream>
using namespace std;

class box {
private:
    double x, y, z; // 가로, 세로, 높이를 저장
    double volume; // 부피
public:
    void setbox(double a, double b, double c); // x = a; y = b; z = c;를 실행
    void calcvolume(); // 부피를 계산하는 함수
    int vol(); // 부피를 반환하는 함수
}

void box::setbox(double a, double b, double c) { x = a; y = b; z = c; }
void box::calcvolume() { volume = x * y * z; }
int box::vol() { return volume; }

int main() {
    double a, b, c;
    box mybox;

    cout << "x, y, z 값을 각각 입력하시오: ";
    cin >> a >> b >> c; // 가로, 세로, 높이를 읽는다.

    mybox.setbox(a, b, c);
    mybox.calcvolume();

    cout << endl << "부피 = " << mybox.vol() << endl; // 부피 출력

    return 0;
}