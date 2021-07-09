#include <iostream>
#include <cstdlib>
using namespace std;

class rectangle {
private:
    int x1, y1, x2, y2;
public:
    rectangle(int a, int b, int c, int d) {
        x1 = a; y1 = b; x2 = c; y2 = d;
    }
    int area();
    int largearea(rectangle rect);
};

int rectangle::area() {
    int width = abs(x2 - x1);
    int height = abs(y2 - y1);
    rerturn width * height;
}

int main() {
    rectangle r1(1, 1, 3, 4), r2(-1, -2, 1, -5);
    cout << "사각형 1의 면적 = " << r1.area() << endl;
    cout << "더 큰 사각형의 면적 = " << r1.largearea(r2) << endl;

    return 0;
}