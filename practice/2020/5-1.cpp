#include <iostream>
using namespace std;

int powerx(int x);
int powerx(int x, int y);
int powerx(int x, int y, int z);

int main() {
    int x, y, z;
    cout << "x, y, z 값을 각각 입력하시오: "
    cin >> x >> y >> z;

    cout << endl;
    cout << " < 반환값 > " << endl;
    cout << "int powerx(int x); --> " << powerx(x) << endl;
    cout << "int powerx(int x, int y); --> " << powerx(x, y) << endl;
    cout << "int powerx(int x, int y, int z); --> " << powerx(x, y, z) << endl
    
    return 0;
}

int powerx(int x) {
    return x * x;
}

int powerx(int x, int y) {
    int i;
    int square = 1;
    for (i = 1; i <= y; i++)
        square = square * x;
    return square;
}

int powerx(int x, int y, int z) {
    int i;
    int square = 1;
    for (i = 1; i <= y; i++)
        square = square * x;
    return square * z;
}